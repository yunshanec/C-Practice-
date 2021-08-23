/*
//单继承
#include <iostream>
using namespace std;

// base-class
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}

	void setHeiht(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// subclass
class Rectangle:public Shape
{
public:
	int getArea()
	{
		return (width*height);
	}
};

int main(int argc, char const *argv[])
{
	Rectangle rectangle;
	rectangle.setWidth(1);
	rectangle.setHeiht(2);
	cout << "rectangle area is: " << rectangle.getArea() << endl;
	return 0;
}

*/
//多重继承

#include <iostream>
using namespace std;

// base-class1
class Shape
{
protected:
	int width;
	int height;
public:
	void setWidth(int w);
	void setHeiht(int h);
};

void Shape::setHeiht(int h)
{
	height = h;
}

void Shape::setWidth(int w)
{
	width = w;
}




// base-class2
class PaintCost
{
public:
	int getCost(int area);
};

int PaintCost::getCost(int area)
{
	return area*70;
}



// subclass
class Rectangle:public Shape,public PaintCost
{
public:
	int getArea();

};

int Rectangle::getArea()
{
	return width*height;
}



int main(int argc, char const *argv[])
{
	Rectangle rectangle;
	int area;

	rectangle.setWidth(2);
	rectangle.setHeiht(3);
	area = rectangle.getArea();

	cout << "Total area: " << area << endl;
	cout << "Total paint cost: " << rectangle.getCost(area) << endl;

	return 0;
}















