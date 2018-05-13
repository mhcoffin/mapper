/*
  ==============================================================================

    AspectOption.h
    Created: 12 May 2018 4:49:09pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class AspectOption    : public Component
{
public:
    AspectOption();
    ~AspectOption();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectOption)
};
