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
    std::cout<< name_ << "\n";
    name_ = name;
}

void Aspect::addItem(const String& item)
{
    items_.push_back(item);
}

const std::vector<const String> Aspect::getItems() const
{
    return items_;
}

void Aspect::addNameChangeListener(std::function<void(String)> callback)
{
    listeners_.push_back(callback);
}



