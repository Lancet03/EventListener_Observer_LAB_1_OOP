#pragma once
#include "ObserverElement.h"
#include <iostream>

class ButtonElement : public ObserverElement {
	std::string id;
public:
	ButtonElement(std::string id) : id(id) {}
	void HandleEvent(std::string event) override {
		std::cout << " нопка с идентификатором " << this->id << " реагирует на событие: " << event << std::endl;
	}
};