#pragma once

#include "Shape.h"
#include <memory>

class Circle : public Shape {
public:
	Circle(const std::shared_ptr<Shape>& nextShape = nullptr);
	void whichShape(int shapeValue) override;
	void display() override;
	void shapeRemove() override;

};