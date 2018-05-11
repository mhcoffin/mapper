/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "AspectSet.h"
#include "Aspect.h"
#include "AspectPane.h"

const auto ASPECTS = 0;
const auto RESIZER_BAR = 1;
const auto CONTROLS = 2;
const auto RESIZER_BAR_THICKNESS = 2;

//==============================================================================
MainComponent::MainComponent()
{
    // Set up test
    auto model = std::make_shared<AspectSet>();
    auto duration = std::make_shared<Aspect>();
    duration->setName("Duration");
    duration->addItem("staccato");
    duration->addItem("tenuto");
    
    model->addAspect(duration);
    
    auto vib = std::make_shared<Aspect>();
    vib->setName("Vibrato");
    vib->addItem("sans vibrato");
    vib->addItem("vibrato");
    vib->addItem("molto vibrato");
    model->addAspect(vib);
    
    aspects_ = std::make_shared<AspectPane>(model);
    
    setOpaque(true);
    addAndMakeVisible(aspects_.get());
    addAndMakeVisible(controls);
    addAndMakeVisible(resizerBar);
    
    stretchableLayoutManager.setItemLayout(ASPECTS, -0.1, -0.9, -0.5);
    stretchableLayoutManager.setItemLayout(
        RESIZER_BAR, RESIZER_BAR_THICKNESS, RESIZER_BAR_THICKNESS,RESIZER_BAR_THICKNESS);
    stretchableLayoutManager.setItemLayout(CONTROLS, -0.1, -0.9, -0.5);
    
    setSize (1000, 1000);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll(Colours::white);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    auto r = getLocalBounds().reduced (1);
    
    // make a list of two of our child components that we want to reposition
    Component* comps[] = { aspects_.get(), &resizerBar, &controls };
    
    // this will position the 3 components, one above the other, to fit
    // vertically into the rectangle provided.
    stretchableLayoutManager.layOutComponents (comps, 3,
                                               r.getX(), r.getY(), r.getWidth(), r.getHeight(),
                                               true, true);
    
}
