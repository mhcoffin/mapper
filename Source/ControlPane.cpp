/*
  ==============================================================================

    Controls.cpp
    Created: 7 May 2018 12:49:16pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "ControlPane.h"

namespace timbre {

//==============================================================================
ControlPane::ControlPane() {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
}

ControlPane::~ControlPane() {
}

void ControlPane::paint(Graphics &g) {
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
}

void ControlPane::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
}