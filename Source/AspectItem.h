/*
  ==============================================================================

    AspectItem.h
    Created: 14 May 2018 7:22:50pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"


namespace timbre {

class AspectItem {
public:
    class Listener {
    public:

        virtual ~Listener() {}

        // Called if the name is changed
        virtual void changeName(const String& newName) = 0;

        // Called if the item is selected or de-selected
        virtual void setSelected(bool selected) = 0;
    };

    AspectItem(String name);
    ~AspectItem();

    const String& getName() const;
    void setName(const String &name);

    bool isSelected() const;
    void setSelected(bool selected);

    void addListener(Listener*);
    void removeListener(Listener*);

private:
    String name_;
    bool selected_;
    ListenerList<Listener> listeners_;

};


} // namespace timbre