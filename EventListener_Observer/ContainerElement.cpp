#include "ContainerElement.h"
#include "ObservableElement.h"
#include "ObserverElement.h"

#include <iostream>

void ContainerElement::AddListener(std::string event, ObserverElement* o) {
	listeners[event].push_back(o);
}

void ContainerElement::RemoveListener(std::string event, ObserverElement* o) {
	auto& vec = listeners[event];
	vec.erase(std::remove(vec.begin(), vec.end(), o), vec.end());
}

void ContainerElement::EmitEvent(std::string event) {
	std::cout << "Запуск события: " << event << std::endl;
	auto it = listeners.find(event);
	if (it != listeners.end()) {
		for (auto* observer : it->second) {
			if (observer) {
				observer->HandleEvent(event);
			}
		}
	}
}