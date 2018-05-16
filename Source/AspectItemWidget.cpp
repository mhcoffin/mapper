/*
  ==============================================================================

    AspectItemWidget.cpp
    Created: 13 May 2018 1:28:18pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItemWidget.h"

//==============================================================================
AspectItemWidget::AspectItemWidget(std::shared_ptr<AspectItem> item) : item_(item) {
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.


}

AspectItemWidget::~AspectItemWidget()
{
}

void AspectItemWidget::paint (Graphics& g)
{
    auto bounds = getLocalBounds();
    g.setColour(Colours::darkgrey);
    g.fillRect(bounds);
    g.setColour(Colours::yellow);
    g.drawText(item_->getName(), bounds.reduced(4), Justification::centredLeft, true);
}

void AspectItemWidget::resized()
{
}
