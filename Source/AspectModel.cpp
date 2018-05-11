/*
  ==============================================================================

    AspectModel.cpp
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#include "AspectModel.h"

AspectModel::AspectModel()
{
    name_ = "";
}

AspectModel::~AspectModel()
{
}

String AspectModel::getName() const
{
    return name_;
}

void AspectModel::setName(const String& name)
{
    std::cout<< name_ << "\n";
    name_ = name;
}

void AspectModel::addItem(const String& item)
{
    items_.push_back(item);
}

const std::vector<const String> AspectModel::getItems() const
{
    return items_;
}

void AspectModel::addNameChangeListener(std::function<void(String)> callback)
{
    listeners_.push_back(callback);
}



