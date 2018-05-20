/*
  ==============================================================================

    AspectModel.h
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItem.h"

/** Model for a single aspect. */
class Aspect
{
public:
    class Listener {
    };

    Aspect();
    ~Aspect();
    
    String getName() const;
    void setName(const String&);
    void addListener(Listener);
    void addItem(std::shared_ptr<AspectItem> item);
    std::vector<std::shared_ptr<AspectItem>> getItems() const;
    void addChangeListener(std::function<void()> callback);
    
private:
    String name_;
    std::vector<std::shared_ptr<AspectItem>> items_;
    ListenerList<Listener> listeners;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspect)
};
