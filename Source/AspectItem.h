/*
  ==============================================================================

    AspectItem.h
    Created: 14 May 2018 7:22:50pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "timbre.h"

namespace timbre {

class AspectItem {
public:
    class Listener {
    public:

        virtual ~Listener() {}

        // Called if the name is changed
        virtual void name(const String& name) = 0;

        // Called if the item is selected or de-selected
        virtual void selected(bool selected) = 0;
    };

    AspectItem(String name);
    ~AspectItem();

    const String& getName() const;
    void setName(const String &name);

    bool selected() const;
    void setSelected(bool selected);

    void addListener(Listener*);

private:
    String name_;
    bool selected_;
    ListenerList<Listener> listeners_;

};


} // namespace timbre