/*
  ==============================================================================

    AspectItemWidget.cpp
    Created: 13 May 2018 1:28:18pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItemWidget.h"
#include "timbre.h"

namespace timbre {

//==============================================================================
AspectItemWidget::AspectItemWidget(Ptr<AspectItem> item) : item_(item) {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    item->addListener(this);
}

AspectItemWidget::~AspectItemWidget() {
}

void AspectItemWidget::paint(Graphics &g) {
    auto bounds = getLocalBounds();
    g.setColour(item_->selected() ? Colours::gold : Colours::lightgrey);
    g.fillRect(bounds);
    g.setColour(Colours::black);
    g.drawText(item_->getName(), bounds.reduced(4), Justification::centredLeft, true);
}

void AspectItemWidget::resized() {
}

void AspectItemWidget::name(const String &name) {
    repaint();
}

void AspectItemWidget::selected(bool selected) {
    std::cout << "select\n";
    repaint();
}

void AspectItemWidget::mouseUp(const MouseEvent &event) {
    if (event.getNumberOfClicks() == 1) {
        item_->setSelected(!item_->selected());
    } else {
        item_->setSelected(!item_->selected());
    }
}

void AspectItemWidget::mouseDoubleClick(const MouseEvent &event) {

}

}