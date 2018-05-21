/*
  ==============================================================================

    AspectWidget.h
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "timbre.h"
#include "Aspect.h"
#include "AspectItemWidget.h"

namespace timbre {

//==============================================================================
/*
 * Widget that dislays a single aspect of note production.
 * TODO: rewrite to not use a group or buttons.
*/
class AspectWidget : public Component {
public:
    AspectWidget(Ptr<Aspect> model);

    ~AspectWidget();

    void paint(Graphics &) override;

    void resized() override;


private:
    void buildFromModel();

    Ptr<Aspect> model_;
    Array<Ptr<AspectItemWidget>> itemWidgets_;
    Ptr<Button> addButton_;
    GroupComponent group_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)

    void getAndAddItem();
};

}