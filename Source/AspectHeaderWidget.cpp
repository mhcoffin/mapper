/*
  ==============================================================================

    AspectHeaderWidget.cpp
    Created: 27 May 2018 5:52:15pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectHeaderWidget.h"

namespace timbre {


//==============================================================================
AspectHeaderWidget::AspectHeaderWidget(std::weak_ptr<AspectHeader> aspectHeader) : aspectHeader_(aspectHeader) {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

AspectHeaderWidget::~AspectHeaderWidget() {
}


void AspectHeaderWidget::paint(Graphics &g) {
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));   // clear the background

    g.setColour(Colours::grey);
    g.drawRect(getLocalBounds(), 1);   // draw an outline around the component

    g.setColour(Colours::white);
    g.setFont(14.0f);
    g.drawText("AspectHeaderWidget", getLocalBounds(),
            Justification::centred, true);   // draw some placeholder text
}

void AspectHeaderWidget::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void AspectHeaderWidget::changeName(const String &name) {
}

} // namespace timbre
