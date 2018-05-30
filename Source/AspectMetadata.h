/*
  ==============================================================================

    AspectHeader.h
    Created: 28 May 2018 12:24:44pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class AspectMetadata
{
public:
    class Listener {
    public:
        virtual ~Listener();
        virtual void changeName(const String& name) = 0;
    };

    AspectMetadata();
    ~AspectMetadata();

    const String& getName() const;
    void setName(const String& name);


private:
    String name_;
    ListenerList<Listener> listeners_;

};
