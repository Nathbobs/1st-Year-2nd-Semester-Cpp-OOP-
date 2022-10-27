#include <iostream>
#include <string>
using namespace std;
#include "shape.h"
int main(){
        int i; char letter;
        Shape** shapes=new Shape*[10];
        double width, height;
        for(i=0; i<10; i++){
                cin >> letter;
                if(letter=='0') break;
                else if(letter=='r'){
                        cin >> width >> height;
                        shapes[i] = new Rectangle(width, height);
                }
                else if(letter=='t'){
                        cin >> width >> height ;
                        shapes[i] = new Triangle(width, height);
                }
        }
        for(int j=0; j<i; j++){
                cout << shapes[j]->getArea() << endl;
		delete[] shapes[j];
	}
        delete[] shapes;
        return 0;
}

