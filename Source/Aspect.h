/*
  ==============================================================================

    AspectModel.h
    Created: 9 May 2018 9:49:43am
    Author:  Michael Coffin

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "AspectItem.h"

namespace timbre {

/** Model for a single aspect. */
    class Aspect {
    public:
        class Listener {
            virtual ~Listener();

            /** Called when the name of the aspect is changed */
            virtual void changeName(const String &name);

            /** Called when an item is added. */
            virtual void addItem(const AspectItem &item);

            /** Called when an item is removed from the aspect */
            virtual void removeItem(const AspectItem &item);
        };

        Aspect();
        ~Aspect();

        String getName() const;
        void setName(const String &);
        void addListener(const Listener *);
        void addItem(std::shared_ptr<AspectItem> item);
        void removeItem(std::shared_ptr<AspectItem> item);
        Array<std::shared_ptr<AspectItem>> getItems() const;

    private:
        String name_;
        Array<std::shared_ptr<AspectItem>> items_;
        ListenerList<Listener> listeners_;

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspect)
    };

} // namespace timbre
