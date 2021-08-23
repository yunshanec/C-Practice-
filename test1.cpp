/*
#include <iostream>
using namespace std;

int g=20;

int main(int argc, char const *argv[])
{
	int g = 10;
	cout << g;
	return 0;
}



#include <iostream>
using namespace std; //申请使用名字空间

extern int a, b;
extern int c;
extern float f;

int main(int argc, char const *argv[])
{
	int a,b;
	int c;
	float f;
	a = 10;
	b = 20;
	c = a+b;
	f = 70/3.0;
	cout << c << endl;
	cout << f << endl;
	return 0;
}



#include <iostream>
using namespace std;

int func();

int main(int argc, char const *argv[])
{
	int i = func();
	cout << i << endl;
}

int func()
{
	return 10.8;
}


// #define预处理器

#include <iostream>
using namespace std;


#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{
	int area;

	area = LENGTH*WIDTH;
	cout << area;
	cout << NEWLINE;

	return 0;
}




//const 关键字
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH*WIDTH;
	cout << area;
	cout << NEWLINE;
	return 0;

}

// 注：把常量定义为大写字母形式，是一个很好的编程习惯



#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	short int i; //有符号短整数
	short unsigned int j; //无符号短整数

	j = 50000;
	i = j;
	cout << i << ' ' << j;

	return 0;
}




// 存储类

// auto 存储类

// register 存储类

// static 存储类


# include <iostream>
using namespace std;
// 函数声明
void func(void);

static int count = 10; //全局变量

int main()
{
	while(count--)
	{
		func();
	}
	return 0;

}

// 函数定义
void func(void)
{
	static int i = 5; //局部静态变量
	i++;
	std::cout << "变量 i 为" << i;
	std::cout << ",变量count为" << count << std::endl;
}

*/

#include <iostream>
using namespace std;

main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a%b;
	cout << "line 1 -c value is: " << c << endl;

	c = a++;
	cout << "line 2 -c value is: " << c << endl;

	if (a == b)
	{
		cout << "a=b " << endl;
	}
	else
	{
		cout << "a!=b " << endl;
	}

}














