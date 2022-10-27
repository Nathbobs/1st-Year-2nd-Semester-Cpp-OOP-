#include <stdio.h>
#include <iostream>
using namespace std;

class Circle {
  public:
    int x, y, r;

    double area();
    double perimeter();
};

class Rectangle {  
   public:
      int lx, ly, bx, by;

      int area();
      int perimeter();
};

double Circle::area() {
   return 3.14 * this->r * this->r;
}

double  Circle::perimeter() {
   return 3.14 * this->r * 2;
}

int Rectangle::area() {
  return abs(this->lx - this->bx) * abs(this->ly - this->by);
}

int Rectangle::perimeter() {
  return (abs(this->lx - this->bx) + abs(this->ly - this->by)) * 2;
}

int main() {
    while(1) {
      cout << "shape?" << endl;
      char a;
      cin >> a;
      if (a == 'C') {
      Circle circle;
      int b, c, d;
      cin >> b >> c >> d;
      circle.x = b;
      circle.y = c;
      circle.r = d;
      cout << "area: " << circle.area() << ", perimeter: " << circle.perimeter() << endl;
      }
      else if (a == 'R') {
      Rectangle rectangle;
      int b, c, d, e;
      cin >> b >> c >> d >> e;
      rectangle.lx = b;
      rectangle.ly = c;
      rectangle.bx = d;
      rectangle.by = e;
      cout << "area: " << rectangle.area() << ", perimeter: " << rectangle.perimeter() << endl;
      }
      else if (a == 'Q') {
        break;
      }
    }
    return 0;
}
