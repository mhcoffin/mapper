/*
  ==============================================================================

    AspectSet.h
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Aspect.h"

class AspectSet
{
public:
    void addAspect(std::shared_ptr<Aspect> aspect);
    std::vector<std::shared_ptr<Aspect>> getAspects() const;
    
private:
    std::vector<std::shared_ptr<Aspect>> aspects_;
};

