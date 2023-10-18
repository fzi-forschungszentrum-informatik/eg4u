// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "QuickStripPacking.h"

UQuickStripPacking::UQuickStripPacking()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UQuickStripPacking::BeginPlay()
{
	Super::BeginPlay();
}

void UQuickStripPacking::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


float UQuickStripPacking::QuickStripPack(std::vector<FQuickStripPacking_Item> items, float strip_width) 
{
    std::sort(items.begin(), items.end(), [](const FQuickStripPacking_Item& a, const FQuickStripPacking_Item& b)
        {
            return a.width > b.width;
        });

    return QuickStripPackRecursive(items, strip_width);
}

// A recursive function to pack a set of items into a strip using the Guillotine Cut algorithm
float UQuickStripPacking::QuickStripPackRecursive(std::vector<FQuickStripPacking_Item> items, float strip_width) 
{
    if (items.size() == 1) 
    {
        return 0.0;
    }
    float total_width = 0.0;

    for (const auto& item : items) 
    {
        total_width += item.width;
    }
    float scale = strip_width / total_width;

    for (auto& item : items) 
    {
        item.width *= scale;
    }

    int i = 0;
    float width = items[i].width;

    while (i < items.size() - 1 && width <= strip_width) 
    {
        i++;
        width += items[i].width;
    }

    std::vector<FQuickStripPacking_Item> left_side = std::vector<FQuickStripPacking_Item>(items.begin(), items.begin() + i);
    std::vector<FQuickStripPacking_Item> right_side = std::vector<FQuickStripPacking_Item>(items.begin() + i, items.end());
    
    float left_height = QuickStripPackRecursive(left_side, width - items[i].width);
    float right_height = QuickStripPackRecursive(right_side, strip_width - width);

    return std::max(left_height, right_height) + items[i].width / scale;
}


float UQuickStripPacking::QuickStripPackRuntime(float strip_width)
{
    float strip_height = 0.f;

    for (FQuickStripPacking_Item itm : items_in)
    {
        m_items.push_back(itm);
    }
    strip_height = QuickStripPack(m_items, strip_width);

    for (FQuickStripPacking_Item itm : m_items)
    {
        items_out.Add(itm);
    }

    return strip_height;
}

