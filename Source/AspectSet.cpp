/*
  ==============================================================================

    AspectSet.cpp
    Created: 10 May 2018 10:32:20pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectSet.h"

namespace timbre {

void AspectSet::addAspect(Ptr<Aspect> aspect) {
    aspects_.add(aspect);
}

Array<Ptr<Aspect>> AspectSet::getAspects() const {
    return aspects_;
}

}