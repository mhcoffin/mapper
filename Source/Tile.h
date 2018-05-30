/*
  ==============================================================================

    Tile.h
    Created: 29 May 2018 6:55:09pm
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
 * A Tile is a widget that has a label that can be changed by the user.
 */
class Tile    : public Component
{
public:
    class Listener {
        virtual ~Listener();
        virtual void changeName(const String& newName) = 0;
    };

    Tile();
    ~Tile();

    void paint (Graphics&) override;
    void resized() override;

    void addListener(Listener* listener) {
        listeners_.add(listener);
    }

private:
    ListenerList<Listener> listeners_;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Tile)
};
