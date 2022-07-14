#pragma once
#include<memory>
#include<iostream>
class Shape {

public:
	Shape(const std::shared_ptr<Shape>& nextShape = nullptr);
	virtual bool whichShape(int shapevalue);
	virtual void display();
	virtual ~Shape() {}
	

protected:
	std::shared_ptr<Shape> nextShape;
	
	
};