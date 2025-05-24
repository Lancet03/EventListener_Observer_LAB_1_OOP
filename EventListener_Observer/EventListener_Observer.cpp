#include <iostream>
#include "ContainerElement.h"
#include "ButtonElement.h"
#include "LabelElement.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	ContainerElement container;

	ButtonElement button("1");
	ButtonElement button2("2");
	LabelElement label("1");

	container.AddListener("click", &button);
	container.AddListener("click", &label);
	container.AddListener("loaded", &button2);
	container.AddListener("loaded", &label);
	container.AddListener("loaded", &button);
	container.AddListener("hover", &button);

	std::cout << "Запуск событий..." << std::endl << std::endl;
	std::cout << "Событие загрузки:" << std::endl;
	container.EmitEvent("loaded");
	std::cout << std::endl;

	std::cout << "Событие нажатия:" << std::endl;
	container.EmitEvent("click");
	std::cout << std::endl;
	
	std::cout << "Событие наведения курсора" << std::endl;
	container.EmitEvent("hover");

	std::cout << "Удаление слушания события нажатия с первой кнопки..." << std::endl;
	container.RemoveListener("click", &button);
	std::cout << "Запуск события клик после удаления слушателя..." << std::endl;
	container.EmitEvent("click");

	return 0;
}
