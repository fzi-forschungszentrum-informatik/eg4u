// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "QuickStripPacking.h"

// Sets default values for this component's properties
UQuickStripPacking::UQuickStripPacking()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UQuickStripPacking::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UQuickStripPacking::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


// A function to pack a set of items into a strip of fixed width
float UQuickStripPacking::QuickStripPack(std::vector<FQuickStripPacking_Item> items, float strip_width) {
    // Sort the items in decreasing order of width
    std::sort(items.begin(), items.end(), [](const FQuickStripPacking_Item& a, const FQuickStripPacking_Item& b)
        {
            return a.width > b.width;
        });

    // Recursively pack the items into the strip using a divide-and-conquer approach
    return QuickStripPackRecursive(items, strip_width);
}

// A recursive function to pack a set of items into a strip using the Guillotine Cut algorithm
float UQuickStripPacking::QuickStripPackRecursive(std::vector<FQuickStripPacking_Item> items, float strip_width) {
    // Base case: if there are no items left to pack, return the height of the strip
    if (items.size() == 1) {
        return 0.0;
    }

    // Calculate the total width of the items
    float total_width = 0.0;
    for (const auto& item : items) {
        total_width += item.width;
    }

    // Calculate the scaling factor for the items to fit into the strip
    float scale = strip_width / total_width;

    // Scale the items to fit into the strip
    for (auto& item : items) {
        item.width *= scale;
    }

    // Find the first item that doesn't fit in the strip
    int i = 0;
    float width = items[i].width;
    while (i < items.size() - 1 && width <= strip_width) {
        i++;
        width += items[i].width;
    }

    // Recursively pack the items to the left and right of the item that doesn't fit
    std::vector<FQuickStripPacking_Item> left_side = std::vector<FQuickStripPacking_Item>(items.begin(), items.begin() + i);
    std::vector<FQuickStripPacking_Item> right_side = std::vector<FQuickStripPacking_Item>(items.begin() + i, items.end());
    
    float left_height = QuickStripPackRecursive(left_side, width - items[i].width);
    float right_height = QuickStripPackRecursive(right_side, strip_width - width);

    //float left_height = StripPackRecursive(std::vector<FStripPacking_Item>(items.begin(), items.begin() + i), width - items[i].width);
    //float right_height = StripPackRecursive(std::vector<FStripPacking_Item>(items.begin() + i, items.end()), strip_width - width);

    // Return the maximum height of the two sub-strips
    return std::max(left_height, right_height) + items[i].width / scale;
}


float UQuickStripPacking::QuickStripPackRuntime(float strip_width)
{
    float strip_height = 0.f;

    for (FQuickStripPacking_Item itm : items_in)
        m_items.push_back(itm);

    strip_height = QuickStripPack(m_items, strip_width);

    for (FQuickStripPacking_Item itm : m_items)
        items_out.Add(itm);

    return strip_height;
}

