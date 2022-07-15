#pragma once

#include "Shape.h"
#include <memory>

class Triangle : public Shape {
public:
	Triangle(const std::shared_ptr<Shape>& nextShape = nullptr);
	void whichShape(int shapeValue) override;
	void display() override;
	void shapeRemove() override;
};