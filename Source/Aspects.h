/*
  ==============================================================================

    Aspects.h
    Created: 7 May 2018 12:49:05pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectWidget.h"

//==============================================================================
/*
 * Some new documentation...
*/
class Aspects    : public Component
{
public:
    Aspects();
    ~Aspects();

    void paint (Graphics&) override;
    void resized() override;

private:
    AspectWidget a_;
    AspectWidget b_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspects)
};
