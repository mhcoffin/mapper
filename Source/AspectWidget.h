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
    AspectWidget(String name);
    ~AspectWidget();

    void paint (Graphics&) override;
    void resized() override;

private:
    GroupComponent group;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)
};
