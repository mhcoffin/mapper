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

String AspectModel::getName()
{
    return name_;
}

void AspectModel::setName(String name)\
{
    name_ = name;
}

void AspectModel::addNameChangeListener(std::function<void(String)> callback)
{
    
}

