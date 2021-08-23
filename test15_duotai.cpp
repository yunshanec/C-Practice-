#include <iostream>
using namespace std;

class Shape
{
protected:
	int width,height;
public:
	Shape(int a,int b)
	{
		width = a;
		height = b;
	}

	virtual int area() = 0;
	

	~Shape()
	{
		cout << "Objected is being deleted..." << endl;
	}
};


class Rectangle:public Shape
{
public:
	Rectangle(int a, int b):Shape(a,b) {}
	
	int area()
	{
		cout << "Rectangle class area: " << width*height << endl;
	}

	
};


class Triangle:public Shape
{
public:
	Triangle(int a, int b):Shape(a,b) {};
	
	int area()
	{
		cout << "Triangle class area: " << width*height/2 << endl;
	}
	
};

int main(int argc, char const *argv[])
{
	Shape *shape;
	Rectangle rectangle(1,2);
	Triangle triangle(1,2);

	shape = &rectangle;
	shape->area();

	shape = &triangle;
	shape->area();

	return 0;
}




































