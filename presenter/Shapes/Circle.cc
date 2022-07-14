#pragma once
#include "Circle.h"
#include "../Singleton.h"

#include <iostream>

Circle::Circle(const std::shared_ptr<Shape>& nextShape) : Shape(nextShape)
{
}

bool Circle::whichShape(int shapeValue)
{	
	if (shapeValue == 1) {
		std::shared_ptr<Circle> circle = std::make_shared<Circle>();
		auto controller = Controller::getInstance();
		controller->insertShape(circle);
	}
	else {
			if (this->nextShape != nullptr) {
				return this->nextShape->whichShape(shapeValue);
			}
			return false;
		}
	return false;
}

void Circle::display() {
	std::cout<<"A circle is inserted to the shape list"<<std::endl;
}
