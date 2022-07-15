#pragma once

#include <iostream>
#include <memory>



class Shape
{
  public:
    // Factory Method
    static Shape *make_stooge(int choice);
    virtual void display();
    //virtual ~Shape() {}
};

