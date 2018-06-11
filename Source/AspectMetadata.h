/*
  ==============================================================================

    AspectMetadata.h
    Created: 10 Jun 2018 1:53:10pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

namespace timbre {

class AspectMetadata {
public:
    struct Listener {
        virtual ~Listener() {
        }

        virtual void changeName(const String &name) = 0;
    };

    void setName(const String &name);
    const String& getName() const;

private:
    String name_;
};

} // namespace timbre