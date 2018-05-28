/*
  ==============================================================================

    AspectItem.cpp
    Created: 14 May 2018 7:22:50pm
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectItem.h"

namespace timbre {


AspectItem::AspectItem(String name) : name_(name), selected_(false) {
}

AspectItem::~AspectItem(){
}

const String& AspectItem::getName() const {
    return name_;
}

void AspectItem::setName(const String& name) {
    if (name != name_) {
        name_ = name;
        listeners_.call( [&] (Listener &l) { l.changeName(name_); } );
    }
}

bool AspectItem::isSelected() const {
    return selected_;
}

void AspectItem::setSelected(bool selected) {
    if (selected != selected_) {
        selected_ = selected;
        listeners_.call( [&] (Listener &l) { l.setSelected(selected); } );
    }
}

void AspectItem::addListener(timbre::AspectItem::Listener * listener) {
    listeners_.add(listener);
}

void AspectItem::removeListener(AspectItem::Listener* listener) {
    listeners_.remove(listener);
}

} // namespace timbre