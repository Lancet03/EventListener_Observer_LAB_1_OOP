#pragma once
#include <string>

class ObserverElement {
public:
	virtual void HandleEvent(std::string event) = 0;
};