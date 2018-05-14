/*
  ==============================================================================

    AspectItemWidget.h
    Created: 13 May 2018 1:28:18pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Ids.h"

//==============================================================================
/*
 * Widget for a single aspect item.
*/
class AspectItemWidget    : public Component
{
public:
    AspectItemWidget(Id id);
    ~AspectItemWidget();

    void paint (Graphics&) override;
    void resized() override;

    void setNameChangeListener(std::function<void(String)> listener) { nameChangeListener_ = listener; }
    String getName() { return name_; }
    Id getId() { return id_; }


private:
    Id id_;
    bool isSelected_;
    String name_;
    std::function<void(String)> nameChangeListener_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectItemWidget)
};
