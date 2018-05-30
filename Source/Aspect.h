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
#include "Aspect.h"
#include "AspectMetadata.h"

namespace timbre {

/** Model for a single aspect. */
    class Aspect {
    public:
        class Listener {
        public:
            virtual ~Listener();

            /** Called when the name of the aspect is changed */
            virtual void changeName(const String &name) = 0;

            /** Called when an item is added. */
            virtual void addItem(const AspectItem &item) = 0;

            /** Called when an item is removed from the aspect */
            virtual void removeItem(const AspectItem &item) = 0;
        };

        Aspect();
        ~Aspect();

        String getName() const;
        void setName(const String &);
        void addListener(const Listener *);
        AspectMetadata* getHeader();
        void addItem(std::shared_ptr<AspectItem> item);
        void removeItem(std::shared_ptr<AspectItem> item);
        Array<std::shared_ptr<AspectItem>> getItems() const;

    private:
        AspectMetadata header_;
        Array<std::shared_ptr<AspectItem>> items_;
        ListenerList<Listener> listeners_;

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Aspect)
    };

} // namespace timbre
