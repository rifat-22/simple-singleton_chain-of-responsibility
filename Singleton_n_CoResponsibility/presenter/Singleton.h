#include <vector>
#include <string>
#include "Shapes/Shape.h"
#include <iostream>

class Controller {
	std::vector<std::shared_ptr<Shape>> shapeList;
	Controller() = default;
	Controller(Controller const&) = delete;
	void operator=(Controller const&) = delete;
public:
	static std::shared_ptr<Controller> getInstance();
	void insertShape(std::shared_ptr<Shape> shape) {
	    this->shapeList.push_back(shape);
    }
	void printInfo();
	void remove(int index);
};
