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
}

void Aspect::addItem(std::shared_ptr<AspectItem> item)
{
    items_.push_back(item);
}

std::vector<std::shared_ptr<AspectItem>> Aspect::getItems() const
{
    return items_;
}



