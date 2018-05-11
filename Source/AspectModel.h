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
class AspectModel
{
public:
    AspectModel();
    ~AspectModel();
    
    String getName() const;
    void setName(const String& name);
    
    void addItem(const String& item);
    const std::vector<const String> getItems() const;
    
    void addNameChangeListener(std::function<void(String)> callback);
    
private:
    String name_;
    std::vector<const String> items_;
    
    std::vector<std::function<void(String)>> listeners_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectModel)
};
