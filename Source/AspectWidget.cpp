/*
  ==============================================================================

    AspectWidget.cpp
    Created: 7 May 2018 12:53:58pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectWidget.h"

//==============================================================================
AspectWidget::AspectWidget()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(group_);
}

AspectWidget::AspectWidget(String name) {
    group_.setText(name);
    addAndMakeVisible(group_);
}

AspectWidget::~AspectWidget()
{
}

void AspectWidget::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void AspectWidget::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    
    group_.setBounds(getLocalBounds().reduced(5));
    auto groupBounds = group_.getLocalBounds().withTop(20).reduced(5);
    for (auto button : items_)
    {
        button->setBounds(groupBounds.removeFromTop(40).reduced(2));
    }
}

void AspectWidget::setName(String name) {
    group_.setText(name);
}

void AspectWidget::addItem(String name) {
    auto button = items_.add(new TextButton{name});
    group_.addAndMakeVisible(button);
}
