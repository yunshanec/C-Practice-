/*
// 函数定义
return_type function_name(parameter list)
{
	body of the function
}

// 函数声明
return_type function_name(parameter list);

*/

#include <iostream>
using namespace std;

//函数声明
int max(int num1, int num2);


int main(int argc, char const *argv[])
{
	int a = 100;
	int b = 200;
	int ret;
	// 函数调用
	ret = max(a,b);
	cout << "Max value is: " << ret << endl;
	return 0;
}


//函数定义
int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
	{
		result = num1;
	}
	else
		result = num2;

	return result;
}


