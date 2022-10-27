#include <iostream>
#include <string>
using namespace std;
#include "animal.h"

Animal::Animal(){}
Animal::Animal(string name, int age){
	this->name=name;
	this->age=age;
}

Zebra::Zebra(){}
Zebra::Zebra(string name, int age, int numStripes) : Animal(name, age){
	this->numStripes=numStripes;
}
void Zebra::printZebra() {
  cout << "Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

