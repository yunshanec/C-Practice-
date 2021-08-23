/*
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	short s = 10;
	int i = -1000;
	long l = 10000;
	float f = 230.34;
	double d = 200.375;

   // 数学运算
   cout << "sin(d) :" << sin(d) << endl;
   cout << "abs(i)  :" << abs(i) << endl;
   cout << "floor(d) :" << floor(d) << endl;
   cout << "sqrt(f) :" << sqrt(f) << endl;
   cout << "pow( d, 2) :" << pow(d, 2) << endl;

	return 0;
}

*/

//随机数
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j;
	//设置种子
	srand((unsigned) time (NULL));
	
	for (int i = 0; i < 10; ++i)
	{
		// 生成随机数字
		j = rand();
		cout << "随机数: " << j << endl;

	}

	return 0;
}














