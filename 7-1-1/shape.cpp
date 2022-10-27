#include <iostream>
using namespace std;
#include "shape.h"

Shape::Shape(double height, double width){
	this->height=height;
	this->width=width;
}

Triangle::Triangle(double height, double width) : Shape(height, width){} //inheriting the constructor
double Triangle::getArea(){
	return (width * height)/2 ;
}
Rectangle::Rectangle(double height, double width) : Shape(height,width) {}
double Rectangle::getArea(){
        return width * height;
}



