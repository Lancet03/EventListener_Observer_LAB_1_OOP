#pragma once
#include "ObserverElement.h"
#include <iostream>

class LabelElement : public ObserverElement {
	std::string id;
public:
	LabelElement(std::string id) : id(id) {}
	void HandleEvent(std::string event) override {
		std::cout << "Надпись с идентификатором " << this->id << " реагирует на событие: " << event  << std::endl;
	}
};