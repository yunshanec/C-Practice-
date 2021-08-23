/*

// 数组声明type arrayName [arraySize]
// 初始化数组
// 访问数组元素 
#include <iostream>
#include <iomanip>
using namespace std;
using std::setw; //格式化输出函数

int main(int argc, char const *argv[])
{
	int n[10]; //创建一个包含是个元素的数组n

	//初始化数组
	for (int i = 0; i < 10; ++i)
	{
		n[i] = i+100;
	}

	cout << "Element" << setw(13) << "Value" << endl;

	//输出数组中的所有元素
	for (int j = 0; j < 10; ++j)
	{
		cout << setw(7) << j << setw(13) << n[j] <<endl;
	}

	return 0;
}


// 多维数组
// type name[size1][size2]...[sizeN]

// 二维数组
int a[3][4] = {
	{0,1,2,3},
	{4,5,6,7},
	{8,9,10,11}
};

int b[3,4] = {0,1,2,3,4,5,6,7,8,9,10,11};

// a 与 b 等同

// 二位数组

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cout << a[i][j] << endl;

		}
	}

	return 0;
}

*/

// 传递数组给函数
#include <iostream>
using namespace std;

double getAverage(int arr[],int size);
int main(int argc, char const *argv[])
{
	int balance[5] = {1000,2,3,17,50};
	double avg;
	// 传递一个只想数组的指针作为参数
	avg = getAverage(balance,5);
	cout << "平均值是： " << avg << endl;
	return 0;
}


double getAverage(int arr[],int size)
{
	int i,sum = 0;
	double avg;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = double(sum) / size;

	return avg;
}


