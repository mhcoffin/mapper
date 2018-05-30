/*
  ==============================================================================

    AspectHeader.cpp
    Created: 28 May 2018 12:24:44pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectMetadata.h"

AspectMetadata::AspectMetadata() : name_("") {
}

AspectMetadata::~AspectMetadata() {
}

AspectMetadata::Listener::~Listener() {}

const String &AspectMetadata::getName() const {
    return name_;
}

void AspectMetadata::setName(const String &name) {
    name_ = name;
}
