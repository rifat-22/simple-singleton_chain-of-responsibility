#include "Singleton.h"
#include <iostream>

std::shared_ptr<Controller> Controller::getInstance()
{
	static std::shared_ptr<Controller> controller(new Controller);
	return controller;
}

void Controller::printInfo()
{
	for(int i=0; i<this->shapeList.size(); i++) {
		shapeList[i]->display();
	} 
}

void Controller::remove(int index)
{
	this->shapeList[index]->shapeRemove();
	this->shapeList.erase(shapeList.begin() + index);
}