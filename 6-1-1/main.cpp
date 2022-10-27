#include <iostream>
#include <string>
using namespace std;
#include "animal.h"
int main(){
	int i; char letter;
	Animal** animals=new Animal*[10];
	int age, numStripes;
	string name, favoriteToy;
	for(i=0; i<10; i++){
		cin >> letter;
		if(letter=='0') break;
		else if(letter=='z'){
			cin >> name >> age >> numStripes;
			animals[i] = new Zebra(name, age, numStripes);
		}
		else if(letter=='c'){
			cin >> name >> age >> favoriteToy;
			animals[i] = new Cat(name, age, favoriteToy);
		}
	}
	for(int j=0; j<i; j++)
		animals[j]->printInfo();
	delete[] animals;
	return 0;
} 
