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

//==============================================================================
/*
 * Widget for a single aspect item.
*/
class AspectItemWidget : public Component {
public:
    AspectItemWidget(std::shared_ptr<AspectItem>);

    ~AspectItemWidget();

    void paint(Graphics &) override;

    void resized() override;

    /** Add a name-change listener */
    void setNameChangeListener(std::function<void(String)>);

    /** Returns the name of this item */
    String name();

    /* Returns true if this item is selected */
    bool isSelected();

private:
    std::shared_ptr<AspectItem> item_;
    bool isSelected_;
    std::function<void(String)> nameChangeListener_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectItemWidget)
};
