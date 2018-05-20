/*
  ==============================================================================

    AspectItem.h
    Created: 14 May 2018 7:22:50pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class AspectItem {
public:
    AspectItem(String name) : name_(name) {}
    ~AspectItem() {}

    String getName() { return name_; }
    void setName(const String& n );

private:
    String name_;
};