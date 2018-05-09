/*
  ==============================================================================

    AspectModel.h
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

/** Model for AspectWidget */
class AspectModel
{
public:
    AspectModel();
    ~AspectModel();
    
    String getName();
    void setName(String name);
    
    void addNameChangeListener(std::function<void(String)> callback);
    
private:
    String name_;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectModel)
};
