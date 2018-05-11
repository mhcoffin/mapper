/*
  ==============================================================================

    AspectWidget.h
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectModel.h"

//==============================================================================
/*
*/
class AspectWidget    : public Component
{
public:
    AspectWidget(std::shared_ptr<AspectModel> model);
    ~AspectWidget();

    void paint (Graphics&) override;
    void resized() override;

private:
    std::shared_ptr<AspectModel> model_;
    
    GroupComponent group_;
    OwnedArray<TextButton> items_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)
};
