#pragma once
#include "ObserverElement.h"
#include "string"

class ObservableElement {
public:
    virtual void AddListener(std::string event, ObserverElement* o) = 0;
    virtual void RemoveListener(std::string event, ObserverElement* o) = 0;
	virtual void EmitEvent(std::string event) = 0;
};