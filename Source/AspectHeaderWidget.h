/*
  ==============================================================================

    AspectHeaderWidget.h
    Created: 27 May 2018 5:52:15pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"


/*
 * Header of an aspect widget
 */
class AspectHeaderWidget    : public Component
{
public:
    AspectHeaderWidget();
    ~AspectHeaderWidget();

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectHeaderWidget)
};
