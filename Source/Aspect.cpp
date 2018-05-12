/*
  ==============================================================================

    AspectModel.cpp
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#include "Aspect.h"

Aspect::Aspect()
{
    name_ = "";
}

Aspect::~Aspect()
{
}

String Aspect::getName() const
{
    return name_;
}

void Aspect::setName(const String& name)
{
    name_ = name;
    notify();
}

void Aspect::addItem(const String& item)
{
    items_.push_back(item);
    notify();
}

const std::vector<const String> Aspect::getItems() const
{
    return items_;
}

void Aspect::addChangeListener(std::function<void()> callback)
{
    listeners_.push_back(callback);
}

void Aspect::notify()
{
    for (auto listener : listeners_)
    {
        listener();
    }
}


