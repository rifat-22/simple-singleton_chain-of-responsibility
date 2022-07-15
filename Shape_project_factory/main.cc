#include "main.h"
#include "Shapes/Shape.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
// #include "Shapes/Circle.h"
// #include "Shapes/Triangle.h"
// #include "Shapes/Rectangle.h"

// int main()
// {
//   std::vector<Shape*> roles;
//   int choice;
//   while (true)
//   {
//     std::cout << "Larry(1) Moe(2) Curly(3) Go(0): ";
//     std::cin >> choice;
//     if (choice == 0)
//       break;
//     roles.push_back(Shape::create_shape(choice));
//   }
//   for (int i = 0; i < roles.size(); i++)
//     roles[i]->display();
//   for (int i = 0; i < roles.size(); i++)
//     delete roles[i];
// }

// Shape *Shape::create_shape(int shapeValue) {
//     if(shapeValue == 1) {
//         return new Circle;
//     } else if(shapeValue == 2) {
//         return new Rectangle;
//     } else {
//         return new Triangle;
//     }
// }



int main()
{
  vector<Shape*> roles;
  int choice;
  while (true)
  {
    cout << "Larry(1) Moe(2) Curly(3) Go(0): ";
    cin >> choice;
    if (choice == 0)
      break;
    roles.push_back(Shape::make_stooge(choice));
  }
  for (int i = 0; i < roles.size(); i++)
    roles[i]->display();
  for (int i = 0; i < roles.size(); i++)
    delete roles[i];
}


