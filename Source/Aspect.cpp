/*
  ==============================================================================

    AspectModel.cpp
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#include "Aspect.h"

namespace timbre {

Aspect::Aspect() {
}

Aspect::~Aspect() {
}

String Aspect::getName() const {
    return header_.getName();
}

void Aspect::setName(const String &name) {
    header_.setName(name);
}

void Aspect::addItem(std::shared_ptr<AspectItem> item) {
    items_.add(item);
}

AspectMetadata* Aspect::getHeader() {
    return &header_;
}

Array<std::shared_ptr<AspectItem>> Aspect::getItems() const {
    return items_;
}

Aspect::Listener::~Listener() {
}

} // namespace timbre