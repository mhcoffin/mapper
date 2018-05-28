/*
  ==============================================================================

    AspectHeaderWidget.h
    Created: 27 May 2018 5:52:15pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Aspect.h"
#include "AspectItem.h"

namespace timbre {

/*
 * Header of an aspect widget
 */
class AspectHeaderWidget
        : public Component, public AspectHeader::Listener
{
public:
    AspectHeaderWidget(std::weak_ptr<AspectHeader> aspect);
    ~AspectHeaderWidget();

    void paint(Graphics &) override;
    void resized() override;

    void changeName(const String& name) override;


private:
    std::weak_ptr<AspectHeader> aspectHeader_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AspectHeaderWidget)
};

} // namespace timbre