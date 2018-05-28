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

namespace timbre {

//==============================================================================
/*
 * Widget that displays a single aspect of note production.
*/
class AspectWidget : public Component {
public:
    AspectWidget(std::shared_ptr<Aspect> model);
    ~AspectWidget();

    void paint(Graphics &) override;
    void resized() override;


private:
    void buildFromModel();

    std::shared_ptr<Aspect> model_;
    Array<std::shared_ptr<AspectItemWidget>> itemWidgets_;
    std::shared_ptr<Button> addButton_;
    GroupComponent group_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)

    void getAndAddItem();
};

}