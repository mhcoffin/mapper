/*
  ==============================================================================

    AspectSet.h
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Aspect.h"

namespace timbre {

class AspectSet {
public:
    AspectSet();
    ~AspectSet();

    void addAspect(std::shared_ptr<Aspect> aspect);

    Array<std::shared_ptr<Aspect>> getAspects() const;

private:
    Array<std::shared_ptr<Aspect>> aspects_;
};

}
