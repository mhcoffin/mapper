/*
  ==============================================================================

    AspectWidget.h
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class AspectWidget    : public Component
{
public:
    AspectWidget();
    ~AspectWidget();

    void paint (Graphics&) override;
    void resized() override;

private:
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)
};