#pragma once
#include "Rectangle.h"
#include "../Singleton.h"
#include <iostream>

Rectangle::Rectangle(const std::shared_ptr<Shape>& nextShape) : Shape(nextShape)
{
}

void Rectangle::whichShape(int shapeValue)
{
	if (shapeValue == 2) {
		std::shared_ptr<Rectangle> rectangle = std::make_shared<Rectangle>();
		auto controller = Controller::getInstance();
		controller->insertShape(rectangle);	
		
	} else {
			if (this->nextShape != nullptr)
				return this->nextShape->whichShape(shapeValue);
			
		}
	
}

void Rectangle::display() {
	std::cout<<"A rectangle is inserted to the shape list"<<std::endl;
}

void Rectangle::shapeRemove() {
	std::cout<<"A reactangle is removed from the shape list"<<std::endl;
}