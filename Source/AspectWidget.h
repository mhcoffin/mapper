/*
  ==============================================================================

    AspectWidget.h
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Aspect.h"
#include "AspectItemWidget.h"
#include "AspectHeaderWidget.h"

namespace timbre {

//==============================================================================
/*
 * Widget that displays a single aspect of note production.
*/
class AspectWidget : public Component {
public:
    AspectWidget(Aspect* model);
    ~AspectWidget();

    void paint(Graphics &) override;
    void resized() override;


private:
    void buildFromModel();

    Aspect* model_;

    std::shared_ptr<AspectHeaderWidget> headerWidget_;
    Array<std::shared_ptr<AspectItemWidget>> itemWidgets_;
    std::shared_ptr<Button> addButton_;
    GroupComponent group_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)

    void getAndAddItem();
};

}