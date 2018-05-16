/*
  ==============================================================================

    AspectItem.cpp
    Created: 14 May 2018 7:22:50pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectItem.h"

void AspectItem::setName(const String& name) {
    name_ = name;
    notify();
}

void AspectItem::addChangeListener(std::function<void()> listener) {
    listeners_.push_back(listener);
}

void AspectItem::notify() {
    for (auto listener : listeners_) {
        listener();
    }
}
