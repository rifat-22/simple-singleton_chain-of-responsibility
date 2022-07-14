#pragma once
#include<memory>
#include<iostream>
class Shape {

public:
	Shape(const std::shared_ptr<Shape>& nextShape = nullptr);
	virtual void whichShape(int shapevalue);
	virtual void display();
	virtual void shapeRemove();
	virtual ~Shape() {}
	

protected:
	std::shared_ptr<Shape> nextShape;
	
	
};