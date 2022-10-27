class Shape{
	public:
		Shape(double _width, double _height);

		virtual double getArea()= 0 ;
	protected:
		double width;
		double height;
};

class Triangle: public Shape{
	public:
		Triangle(double _width, double _height);
		virtual double getArea();
};
class Rectangle: public Shape{
	public:
		Rectangle(double _width, double _height);
		virtual double getArea();
};
