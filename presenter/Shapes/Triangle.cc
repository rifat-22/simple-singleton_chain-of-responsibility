#pragma once
#include "Triangle.h"
#include "../Singleton.h"
#include <iostream>

Triangle::Triangle(const std::shared_ptr<Shape>& nextShape) : Shape(nextShape)
{
}

bool Triangle::whichShape(int shapeValue)
{
	if (shapeValue == 3) {
		std::shared_ptr<Triangle> triangle = std::make_shared<Triangle>();
		auto controller = Controller::getInstance();
		controller->insertShape(triangle);
		
	} else {
		return this->nextShape->whichShape(shapeValue);
	}
	return false;
}
void Triangle::display() {
	std::cout<<"A triangle is inserted to the shape list"<<std::endl;
}