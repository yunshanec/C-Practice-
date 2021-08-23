/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// 声明简单的变量
	int i;
	double d;

	//声明引用变量
	int& r=i; // r是一个初始化为i的int型引用
	double& s=d; //s是一个初始化为d的double型引用

	i = 5;
	cout << "Value of i: " << i << endl;
	cout << "Value of i reference: " << r << endl;

	d = 11.7;
	cout << "Value of d: " << d << endl;
	cout << "Value of d reference: " << s << endl;



	return 0;
}



//把引用作为参数
#include <iostream>
using namespace std;

void swap(int& x,int& y);

int main(int argc, char const *argv[])
{
	int a = 100;
	int b = 200;

	cout << "交换前，a的值： " << a << endl;
	cout << "交换前，b的值： " << b << endl;

	swap(a,b);

	cout << "交换后，a的值： " << a << endl;
	cout << "交换后，b的值： " << b << endl;

	return 0;
}

void swap(int& x,int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	return;
}

*/

// 把引用作为返回值
#include <iostream>
#include <ctime>

using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues(int i)
{
	return vals[i]; //返回第i个元素的引用
}

int main(int argc, char const *argv[])
{
	cout << "改变前的值" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	setValues(1) = 20.23;
	setValues(3) = 70.8;

	cout << "改变后的值" << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	return 0;
}















