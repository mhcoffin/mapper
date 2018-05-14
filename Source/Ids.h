/*
  ==============================================================================

    Ids.h
    Created: 13 May 2018 3:05:38pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

using Id = int64;

/**
 * ID generator.
 */
class Ids
{
public:
    Ids() : rand_(std::make_unique<Random>()) {}
    ~Ids() {}

    Id get() { return rand_->nextInt64(); }

private:
    std::unique_ptr<Random> rand_;
};
