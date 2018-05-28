/*
  ==============================================================================

    AspectItemWidget.cpp
    Created: 13 May 2018 1:28:18pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItemWidget.h"


namespace timbre {

//==============================================================================
AspectItemWidget::AspectItemWidget(std::shared_ptr<AspectItem> item) : item_(item) {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    item->addListener(this);
}

AspectItemWidget::~AspectItemWidget() {
}

void AspectItemWidget::paint(Graphics &g) {
    auto bounds = getLocalBounds();
    g.setColour(item_->isSelected() ? Colours::gold : Colours::lightgrey);
    g.fillRect(bounds);
    g.setColour(Colours::black);
    g.drawText(item_->getName(), bounds.reduced(4), Justification::centredLeft, true);
}

void AspectItemWidget::resized() {
}

void AspectItemWidget::changeName(const String &name) {
    repaint();
}

void AspectItemWidget::setSelected(bool selected) {
    std::cout << "select\n";
    repaint();
}

void AspectItemWidget::mouseUp(const MouseEvent &event) {
    if (event.getNumberOfClicks() == 1) {
        item_->setSelected(!item_->isSelected());
    } else {
        item_->setSelected(!item_->isSelected());
    }
}

void AspectItemWidget::mouseDoubleClick(const MouseEvent &event) {

}

}