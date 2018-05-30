/*
  ==============================================================================

    AspectWidget.cpp
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectWidget.h"

namespace timbre {

//==============================================================================
AspectWidget::AspectWidget(std::shared_ptr<Aspect> model) {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    model_ = model;

    headerWidget_ = std::make_shared<AspectHeaderWidget>(model_->getHeader());
    addAndMakeVisible(headerWidget_.get());

    for (auto item : model_->getItems()) {
        auto widget = std::make_shared<AspectItemWidget>(item);
        itemWidgets_.add(widget);
        addAndMakeVisible(widget.get());
    }
}

AspectWidget::~AspectWidget() {
}

void AspectWidget::paint(Graphics &g) {
    auto mainColor = Colours::ghostwhite;

    g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
    auto bounds = getLocalBounds().reduced(5);
    g.setColour(mainColor);
    g.drawRect(bounds, 1.0);
}

void AspectWidget::resized() {
    // This method is where you should set the bounds of any child
    // components that your component contains..

    auto bounds = getLocalBounds().reduced(5);
    headerWidget_->setBounds(bounds.removeFromTop(30));
    for (auto widget : itemWidgets_) {
        auto itemBounds = bounds.removeFromTop(25).reduced(2);
        widget->setBounds(itemBounds);
    }
}

}