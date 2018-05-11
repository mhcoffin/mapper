/*
  ==============================================================================

    Aspects.cpp
    Created: 7 May 2018 12:49:05pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectPane.h"
#include "AspectModel.h"

//==============================================================================
AspectPane::AspectPane()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    
    // temporary
    auto durationModel = std::shared_ptr<AspectModel>(new AspectModel{});
    durationModel->setName("Duration");
    
    auto durations = new AspectWidget{durationModel};
    aspectWidgets_.add(durations);
    
    for (auto aw : aspectWidgets_) {
        addAndMakeVisible(aw);
    }
}

AspectPane::~AspectPane()
{
}

void AspectPane::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

}

void AspectPane::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    auto bounds = getLocalBounds();
    for (auto a : aspectWidgets_) {
        a->setBounds(bounds.removeFromLeft(200));
    }
}