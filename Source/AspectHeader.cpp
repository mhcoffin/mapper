/*
  ==============================================================================

    AspectHeader.cpp
    Created: 28 May 2018 12:24:44pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectHeader.h"

AspectHeader::AspectHeader() : name_("") {
}

AspectHeader::~AspectHeader() {
}

const String &AspectHeader::getName() const {
    return name_;
}

void AspectHeader::setName(const String &name) {
    name_ = name;
}
