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

    void addAspect(std::unique_ptr<Aspect> aspect);

    const std::vector<std::unique_ptr<Aspect>>& getAspects() const;

private:
    std::vector<std::unique_ptr<Aspect>> aspects_;
};

}
