/*
  ==============================================================================

    timbre.h
    Created: 20 May 2018 10:25:20am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

/**
 * Some shared definitions for timbre namespace.
 */
namespace timbre {
    // std::shared_ptr<T> -> ptr<T>
    template<typename T>
    using Ptr = std::shared_ptr<T>;

    // std::::make_shared<T>(arg ...) -> make<T>(arg ...)
    template<typename T, typename... Args>
    auto make(Args&&... args) {
        return std::make_shared<T>(std::forward<Args>(args)...);
    }
}