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

//==============================================================================
/*
*/
class AspectWidget    : public Component
{
public:
    AspectWidget(std::shared_ptr<Aspect> model);
    ~AspectWidget();

    void paint (Graphics&) override;
    void resized() override;
    

private:
    void buildFromModel();
    std::shared_ptr<Aspect> model_;
    std::vector<std::shared_ptr<Button>> buttons_;
    std::shared_ptr<Button> addButton_;
    GroupComponent group_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectWidget)
};
