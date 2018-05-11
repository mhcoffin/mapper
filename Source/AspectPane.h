/*
  ==============================================================================

    AspectPane.h
    Created: 7 May 2018 12:49:05pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectWidget.h"
#include "AspectSet.h"

//==============================================================================
/*
 * Some new documentation...
*/
class AspectPane    : public Component
{
public:
    AspectPane(std::shared_ptr<AspectSet> model);
    ~AspectPane();

    void paint (Graphics&) override;
    void resized() override;
    
    void addAspect(String name);

private:
    std::vector<std::shared_ptr<AspectWidget>> aspectWidgets_;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectPane)
};
