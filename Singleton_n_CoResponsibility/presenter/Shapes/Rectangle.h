#pragma once

#include "Shape.h"
#include <memory>
#include <vector>

class Rectangle : public Shape {
public:
	Rectangle(const std::shared_ptr<Shape>& nextShape = nullptr);
	void whichShape(int shapeValue) override;
	void display() override;
	void shapeRemove() override;
	
};