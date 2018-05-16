/*
  ==============================================================================

    AspectModel.h
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItem.h"

/** Model for a single aspect. */
class Aspect
{
public:
    Aspect();
    ~Aspect();
    
    String getName() const;
    void setName(const String& name);
    
    void addItem(std::shared_ptr<AspectItem> item);
    std::vector<std::shared_ptr<AspectItem>> getItems() const;
    
    void addChangeListener(std::function<void()> callback);
    
private:
    String name_;
    std::vector<std::shared_ptr<AspectItem>> items_;
    
    void notify();
    std::vector<std::function<void()>> listeners_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspect)
};
