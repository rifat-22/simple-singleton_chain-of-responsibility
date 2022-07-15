#pragma once

#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

Shape *Shape::make_stooge(int choice)
{
  if (choice == 1)
    return new Circle;
  else if (choice == 2)
    return new Rectangle;
  else
    return new Triangle;
}


void Shape::display() {
    std::cout<<"A normal shape";}