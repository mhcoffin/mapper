/*
  ==============================================================================

    Controls.h
    Created: 7 May 2018 12:49:16pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ControlPane    : public Component
{
public:
    ControlPane();
    ~ControlPane();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlPane)
};
