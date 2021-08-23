/*
#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double height;		
};

int main(int argc, char const *argv[])
{
	
	Box Box1;

	double volume = 0.0;
	
	Box1.height = 5;
	Box1.length = 6;
	Box1.breadth = 7;

	volume = Box1.height * Box1.length * Box1.breadth;
	cout << "Box1 的体积： " << volume << endl;

	return 0;
}




//类成员函数

#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double heigth;

		//成员函数声明
		double getVolume(void);
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
};


// 成员函数声明
double Box::getVolume(void)
{
	return length*breadth*heigth;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	heigth = hei;
}


int main(int argc, char const *argv[])
{
	Box Box1;
	double volume=0.0; // 用于存储体积

	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(8.0);

	volume = Box1.getVolume();

	cout << "volume is:  " << volume << endl;
	return 0;
}



// 类访问修饰符

// public 公有成员
#include <iostream>
using namespace std;

class Line
{
public:
	double length;
	void setLength(double len);
	double getLength(void);
};

// 成员函数定义
double Line::getLength(void)
{
	return length;
}

void Line::setLength(double len)
{
	length = len;
}

int main(int argc, char const *argv[])
{	
	//使用成员变量设置长度
	Line line;
	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;

	//不是呀成员变量设置长度
	line.length = 10.0;
	cout << "Length of line: " << line.length << endl;

	return 0;
}



// private 私有成员
#include <iostream>
using namespace std;

class Box
{
	public:
		double length;
		void setWidth(double wid);
		double getWidth(void);
	
	private:
		double width;	
};

// 成员函数定义

double Box::getWidth(void)
{
	return width;
}


void Box::setWidth(double wid)
{
	width = wid;
}

int main(int argc, char const *argv[])
{
	Box box;
	box.length = 10.0;
	cout << "Length of box: " << box.length << endl;

	box.setWidth(10.0);
	cout << "Width of box: " << box.getWidth() << endl;

	return 0;
}




//protected保护成员

#include <iostream>
using namespace std;

class Box
{
	protected:
		double width;
};

class SmallBox:Box //SmallBox 是 Box 的子类
{
	public:
		void setSmallWidth(double wid);
		double getSmallWidth(void);
};

double SmallBox::getSmallWidth(void)
{
	return width;
}

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}


int main(int argc, char const *argv[])
{
	SmallBox box;
	box.setSmallWidth(5.0);
	cout << "Width of box: " << box.getSmallWidth() << endl;

	return 0;
}





// 类的构造函数
// 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行
#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		Line(); // 这是构造函数
	private:
		double length;
};

//成员函数定义
Line::Line(void)
{
	cout << "Object is being created" << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}

int main()
{
	Line line;
	line.setLength(5.0);

	cout << "Length of line: " << line.getLength() << endl;

	return 0;
}




// 带参数的构造函数
#include <iostream>
using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		Line(double len); // 构造函数

	private:
		double length;
};


//成员函数定义，包括构造函数
//构造函数
Line::Line(double len)
{
	cout << "Object is being created,length = " << len << endl;
	length = len;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}


//程序主函数
int main(int argc, char const *argv[])
{
	Line line(10.0); //创建一个对象line 初始化长度为10.0
	cout << "Length of line: " << line.getLength() << endl;

	line.setLength(6.0);
	cout << "Length of line: " << line.getLength() << endl;
	return 0;
}




// 析构函数
#include <iostream>
using namespace std;

class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		Line(); //构造函数声明
		~Line(); //析构函数声明
	private:
		double length;
};

Line::Line(void)
{
	cout << "Object is being created..." << endl;
}

Line::~Line(void)
{
	cout << "Object is being deleted..." << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}


int main(int argc, char const *argv[])
{
	Line line;
	line.setLength(10.0);
	cout << "Length of line: " << line.getLength() << endl;
	return 0;
}




//拷贝构造函数
#include <iostream>
using namespace std;

class CExample
{
	private:
		int a;
	public:

		CExample(int b)
		{
			a = b;
		}

		void show()
		{
			cout << a << endl;
		}

};


int main(int argc, char const *argv[])
{
	CExample A(100);
	CExample B = A; // 此处对象初始化要调用拷贝构造函数，而非赋值
	B.show();

	return 0;
}


#include <iostream>
using namespace std;

class Line
{
public:
	int getLength(void);
	Line(int len);
	Line(const Line &obj); //拷贝构造函数
	~Line();
private:
	int *ptr;
};


//构造函数
Line::Line(int len)
{
	cout << "Normal constructor allocating ptr" << endl;
	// 为指针分配内存
	ptr = new int;
	*ptr = len;
}

//obj 是一个对象引用
Line::Line(const Line &obj)
{
	cout << "Copy constructor allocating ptr" << endl;
	ptr = new int; //为指针分配内存
	*ptr = *obj.ptr; //copy the value

}


//析构函数，释放内存
Line::~Line(void)
{
	cout << "Freeing memory!" << endl;
	delete ptr;
}


int Line::getLength(void)
{
	return *ptr;
}


void display(Line obj)
{
	cout << "Length of line: " << obj.getLength() << endl; 
}


int main(int argc, char const *argv[])
{
	Line line1(10);
	Line line2 = line1; //调用拷贝构造函数
	display(line1);
	display(line2);
	return 0;
}




// 友元函数能够访问private和protected

#include <iostream>
using namespace std;
class Box
{
private:
	double width;
public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};

void Box::setWidth(double wid)
{
	width = wid;
}

void printWidth(Box box)
{
	// 友元函数可以访问该类的任何成员
	cout << "Width of box: " << box.width << endl;
}

int main(int argc, char const *argv[])
{
	Box box;
	box.setWidth(10.0);
	printWidth(box);

	return 0;
}



//内联函数
#include <iostream>
using namespace std;

inline int Max(int num1,int num2)
{
	if (num1 >num2)
	{
		return num1;
	}
	return num2;
}



int main(int argc, char const *argv[])
{
	cout << "Max (10,20): " << Max(10,20) << endl;

	return 0;
}



//c++中的this指针
#include <iostream>
using namespace std;

class Box
{
public:
	Box(double l,double b, double h)
	{
		cout << "constructor called." << endl;
		length = l;
		breadth = b;
		heigth = h;
	}

	double Volume()
	{
		return length * breadth * heigth;
	}

	int compare(Box box)
	{
		return this->Volume()>box.Volume();
	}

private:
	double length;
	double breadth;
	double heigth;
	
};

int main(int argc, char const *argv[])
{
	Box box1(3.3,1.2,1.5);
	Box box2(8.5,6.0,2.0);

	if (box1.compare(box2))
	{
		cout << "box2 is smaller than box1" << endl;
	}
	else
	{
		cout << "box2 is equal to or larger than box1" << endl;
	}
	return 0;
}



//c++中指向类的指针
#include <iostream>
using namespace std;

class Box
{
public:
	Box(double l,double b,double h)
	{
		cout << "constructor called" << endl;
		length = l;
		breadth = b;
		heigth = h;
	}

	double volume()
	{
		return heigth * breadth * heigth;
	}

private:
	double heigth;
	double breadth;
	double length;
};

int main(int argc, char const *argv[])
{
	Box box1(1,2,3);
	Box box2(4,5,6);
	Box *ptrbox; //Declare pointer to a class

	ptrbox = &box1;
	cout << "Volume of box1:" << ptrbox ->volume() << endl;

	ptrbox = &box2;
	cout << "Volume of box2:" << ptrbox ->volume() << endl;

	return 0;
}

*/
//类的静态成员
#include <iostream>
using namespace std;

class Box
{
private:
	double length;
	double breadth;
	double heigth;

public:
	static int objectCount;
	Box(double l, double b, double h)
	{
		cout << "constructor called." << endl;
		length = l;
		breadth = b;
		heigth = h;
		//每次创建对象时增加1
		objectCount++;
	}

	double volume()
	{
		return length*breadth*heigth;
	}

	static int getCount()
	{
		return objectCount;
	}

	~Box()
	{
		cout << "Object is being deleted..." << endl;
	}
};

//初始化类Box的静态成员
int Box::objectCount = 0;

int main(int argc, char const *argv[])
{
	cout << "Inital Stage Count: " << Box:: getCount() << endl;

	Box box1(1,2,3);
	Box box2(4,5,6);

	cout << "Final Stage Count: " << Box::getCount() << endl;
	return 0;
}



























