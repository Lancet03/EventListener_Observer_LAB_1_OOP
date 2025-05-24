#pragma once
#include "ObservableElement.h"
#include "ObserverElement.h"
#include "string"
#include "vector"
#include "map"

class ContainerElement :
	public ObservableElement
{
	std::map<std::string, std::vector<ObserverElement*>> listeners;
public:
	void AddListener(std::string event, ObserverElement* o) override;
	void RemoveListener(std::string event, ObserverElement* o) override;
	void EmitEvent(std::string event) override;
};

