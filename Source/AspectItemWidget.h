/*
  ==============================================================================

    AspectItemWidget.h
    Created: 13 May 2018 1:28:18pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItem.h"

namespace timbre {

/*
 * Widget for a single aspect item.
*/
class AspectItemWidget : public Component, AspectItem::Listener {
public:
    AspectItemWidget(std::shared_ptr<AspectItem>);
    ~AspectItemWidget();

    void paint(Graphics &) override;
    void resized() override;

private:
    std::shared_ptr<AspectItem> item_;

    void changeName(const String &name) override;
    void setSelected(bool selected) override;

public:
    void mouseUp(const MouseEvent &event) override;
    void mouseDoubleClick(const MouseEvent &event) override;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectItemWidget)
};

} // namespace timbre