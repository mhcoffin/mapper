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
    auto mainColor = Colours::yellow;
    auto darkColor = Colours::darkgrey;
    auto darkHighlight = Colours::forestgreen;

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    auto bounds = getLocalBounds().reduced(10);
    g.setColour(mainColor);
    g.drawRect(bounds.reduced(1), 1.0);

    auto header = bounds.removeFromTop(30);

    g.setColour(mainColor);
    g.fillRect(header.reduced(2));
    g.setColour(Colours::black);
    g.drawText(model_->getName(), header.reduced(4, 0), Justification::centredLeft, true);

    for (auto item : model_->getItems()) {
        auto itemBounds = bounds.removeFromTop(25);
        g.setColour(darkColor);
        g.fillRect(itemBounds.reduced(2));
        g.setColour(mainColor);
        g.drawText(item, itemBounds.reduced(4, 0), Justification::centredLeft, true);
    }
}

void AspectWidget::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    
}
