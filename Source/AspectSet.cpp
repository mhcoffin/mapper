/*
  ==============================================================================

    AspectSet.cpp
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectSet.h"

namespace timbre {

AspectSet::AspectSet() {
}

AspectSet::~AspectSet() {
}

void AspectSet::addAspect(std::unique_ptr<Aspect> aspect) {
    aspects_.push_back(std::move(aspect));
}

const std::vector<std::unique_ptr<Aspect>>& AspectSet::getAspects() const {
    return aspects_;
}

}