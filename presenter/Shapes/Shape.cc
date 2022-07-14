#include "Shape.h"
#include <iostream>
#include <vector>

Shape::Shape(const std::shared_ptr<Shape>& nextShape)
{
	this->nextShape = nextShape;
}



void Shape::whichShape(int shapeValue)
{

	std::cout << "Ended" << std::endl;
	
}

void Shape::display() {
	std::cout<<"simple display"<<std::endl;
}

void Shape::shapeRemove() {
	std::cout<<"one shape is removed"<<std::endl;
}

