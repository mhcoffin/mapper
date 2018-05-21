/*
  ==============================================================================

    AspectSet.h
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "timbre.h"
#include "Aspect.h"

namespace timbre {

class AspectSet {
public:
    void addAspect(Ptr<Aspect> aspect);

    Array<Ptr<Aspect>> getAspects() const;

private:
    Array<Ptr<Aspect>> aspects_;
};

}