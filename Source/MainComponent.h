/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "timbre.h"
#include "AspectPane.h"
#include "ControlPane.h"

namespace timbre {
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent : public Component {
public:
    //==============================================================================
    MainComponent();

    ~MainComponent();

    //==============================================================================
    void paint(Graphics &) override;

    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    Ptr<AspectPane> aspects_;
    ControlPane controls;

    StretchableLayoutManager stretchableLayoutManager;
    StretchableLayoutResizerBar resizerBar{&stretchableLayoutManager, 1, false};

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

}