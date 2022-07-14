#include "Shape.h"
#include <iostream>
#include <vector>

Shape::Shape(const std::shared_ptr<Shape>& nextShape)
{
	this->nextShape = nextShape;
}



bool Shape::whichShape(int shapeValue)
{

	std::cout << "Ended" << std::endl;
	return true;
}

void Shape::display() {
	std::cout<<"simple display"<<std::endl;
}

