/*
  ==============================================================================

    AspectMetadata.cpp
    Created: 10 Jun 2018 1:53:10pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectMetadata.h"

namespace timbre {

void AspectMetadata::setName(const String &name) {
    name_ = name;
}

const String& AspectMetadata::getName() const {
    return name_;
}

} // namespace timbre
