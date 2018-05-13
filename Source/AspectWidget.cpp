/*
  ==============================================================================

    AspectWidget.cpp
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectWidget.h"

//==============================================================================
AspectWidget::AspectWidget(std::shared_ptr<Aspect> model)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    model_ = model;
}

AspectWidget::~AspectWidget()
{
}

void AspectWidget::getAndAddItem() {
    model_->addItem("Foobar");
}

void AspectWidget::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    auto bounds = getLocalBounds().reduced(10);
    g.setColour(Colours::white);
    g.drawRect(bounds.reduced(1), 1.0);

    auto header = bounds.removeFromTop(30);

    g.setColour(Colours::yellow);
    g.fillRect(header.reduced(2));
    g.setColour(Colours::black);
    g.drawText(model_->getName(), header.reduced(4, 0), Justification::centredLeft, true);

    for (auto item : model_->getItems()) {
        auto itemBounds = bounds.removeFromTop(25);
        g.setColour(Colours::grey);
        g.fillRect(itemBounds.reduced(2));
        g.setColour(Colours::white);
        g.drawText(item, itemBounds.reduced(4, 0), Justification::centredLeft, true);
    }
}

void AspectWidget::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    
}
