/*
  ==============================================================================

    AspectPane.h
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
class AspectPane    : public Component
{
public:
    AspectPane();
    ~AspectPane();

    void paint (Graphics&) override;
    void resized() override;
    
    void addAspect(String name);

private:
    OwnedArray<AspectWidget> aspectWidgets_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectPane)
};