/*
  ==============================================================================

    AspectSet.cpp
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectSet.h"

void AspectSet::addAspect(std::shared_ptr<Aspect> aspect)
{
    aspects_.push_back(aspect);
}

std::vector<std::shared_ptr<Aspect>> AspectSet::getAspects() const
{
    return aspects_;
}
