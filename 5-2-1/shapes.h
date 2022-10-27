#include <iostream>
using namespace std;

class Shape {
        public:
                Shape;
                Shape(string a) { name = a; };

                double GetArea() {};
                int GetPerimeter() {};
                void Draw (int canvas_width, int canvas_height) {};

        protected:
                string name;
};
class square : public Shape {
        public:
                int sx, sy, sl;

                double GetArea();
                int GetPerimeter;
                void Draw (int canvas_width, int canvas_height) {};
};
class rectangle : public Shape {
        public:
                int rx, ry, w, h;

                double GetArea();
                int GetPerimeter;
                void Draw (int canvas_width, int canvas_height) {};

};

class Canvas {
        public:
                Canvas(const size_t row, const size_t col);
                ~Canvas()


                void Resize(const size_t row const size_t col);

                bool DrawPixel(const int x, const in y, const char brush);


                void Print() const;
                void Clear();


        private:
                size_t row, col;
                cgar **canvas;

};



