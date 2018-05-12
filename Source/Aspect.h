/*
  ==============================================================================

    AspectModel.h
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

/** Model for a single aspect. */
class Aspect
{
public:
    Aspect();
    ~Aspect();
    
    String getName() const;
    void setName(const String& name);
    
    void addItem(const String& item);
    const std::vector<const String> getItems() const;
    
    void addChangeListener(std::function<void()> callback);
    
private:
    String name_;
    std::vector<const String> items_;
    
    void notify();
    std::vector<std::function<void()>> listeners_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspect)
};