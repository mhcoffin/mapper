/*
  ==============================================================================

    Aspects.cpp
    Created: 7 May 2018 12:49:05pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Aspects.h"

//==============================================================================
Aspects::Aspects()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(&a_);
    addAndMakeVisible(&b_);
}

Aspects::~Aspects()
{
}

void Aspects::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("Aspects", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void Aspects::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    auto bounds = getLocalBounds();
    a_.setBounds(bounds.removeFromLeft(200));
    b_.setBounds(bounds.removeFromLeft(200));

}
