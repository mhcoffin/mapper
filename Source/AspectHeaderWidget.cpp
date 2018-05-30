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
AspectHeaderWidget::AspectHeaderWidget(AspectMetadata* aspectHeader) : aspectHeader_(aspectHeader) {
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
    auto mainColor = Colours::ghostwhite;

    g.setColour(mainColor);
    g.fillRect(getLocalBounds().reduced(2));
    g.setColour(Colours::black);
    g.setFont(14);
    g.drawText(aspectHeader_->getName(), getLocalBounds().reduced(4, 0), Justification::centredLeft, true);
}

void AspectHeaderWidget::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void AspectHeaderWidget::changeName(const String &name) {
}

} // namespace timbre
