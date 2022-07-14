#include "main.h"
#include "Shapes/Shape.h"
#include "Shapes/Circle.h"
#include "Shapes/Triangle.h"
#include "Shapes/Rectangle.h"
#include "Singleton.h"
#include <iostream>
#include <memory>

int main()
{
	int count;
	std::cout<<"how many shapes ";
	std::cin>>count;
	std::cout<<std::endl;
	
	std::vector<int> shapeValues;
	int shapeValue;
	std::cout<<"Enter shape values ";

	std::shared_ptr<Circle> circle = std::make_shared<Circle>();
	std::shared_ptr<Rectangle> rectangle = std::make_shared<Rectangle>(circle);
	std::shared_ptr<Triangle> triangle = std::make_shared<Triangle>(rectangle);

	for(int i=0; i<count; i++) {
		std::cin>>shapeValue;
		shapeValues.push_back(shapeValue);
	}

	for(int k=0; k<shapeValues.size(); k++) {
		triangle->whichShape(shapeValues[k]);
	}

	auto controller = Controller::getInstance();
	controller->printInfo();
}
