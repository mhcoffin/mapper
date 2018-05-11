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
AspectWidget::AspectWidget(std::shared_ptr<Aspect> model)
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    model_ = model;

    addButton_ = std::make_shared<TextButton>("+");
    addButton_->setColour(TextButton::buttonColourId, Colours::white);
    addButton_->setColour(TextButton::textColourOffId, Colours::red);
    
    buildFromModel();

    addAndMakeVisible(group_);
    
    addButton_->onClick = [this](){model_->addItem("Foobar");};
    model_->addChangeListener([this]() {buildFromModel(); resized(); });
}

AspectWidget::~AspectWidget()
{
}

void AspectWidget::buildFromModel()
{
    std::cout << "Building widget " << group_.getText() << "\n";
    
    group_.setText(model_->getName());
    group_.removeAllChildren();
    buttons_.clear();
    for (auto item : model_->getItems())
    {
        std::cout << "  adding " << item << "\n";
        auto button = std::make_shared<TextButton>(item);
        buttons_.push_back(button);
        group_.addAndMakeVisible(button.get());
    }
    group_.addAndMakeVisible(addButton_.get());
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
    for (auto button : buttons_)
    {
        button->setBounds(groupBounds.removeFromTop(40).reduced(2));
    }
    addButton_->setBounds(groupBounds.removeFromBottom(40).removeFromLeft(40));
}
