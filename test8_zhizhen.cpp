/*
// c++ 指针

#include <iostream>
using namespace std;
int main()
{
	int var1;
	char var2[10];
	
	cout << "var1 变量的地址： ";
	cout << &var1 << endl;

	cout << "var2 变量的地址： ";
	cout << &var2 << endl;

	return 0;
}



#include <iostream>
using namespace std;

int main()
{
	int var = 20; //实际变量的声明
	int *ip; //指针变量的声明

	ip = &var; //在指针变量中存储var的地址

	cout << "Value of var variable: ";
	cout << var << endl;

	// 输出在指针变量中存储的地址
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// 访问指针中地址的值
	cout << "Value of *ip variable: ";
	cout << *ip << endl;



	return 0;
}




// 指针的算数运算

#include <iostream>
using namespace std;

const int MAX = 3;

int main(int argc, char const *argv[])
{
	int var[MAX] = {10,100,200};
	int *ptr;

	// 指针中的数组地址
	// 在指针变量中存储数组var的地址
	ptr = var;
	for (int i = 0; i < MAX; ++i)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "]=";
		cout << *ptr << endl;

		//移到下一个位置
		ptr++;
	}

	return 0;
}




//指针数组

#include <iostream>
using namespace std;

const int MAX=3;

int main(int argc, char const *argv[])
{
	int var[MAX] = {10,100,200};
	int *ptr[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		ptr[i] = &var[i]; //赋值为整数的地址
	}


	for (int i = 0; i < MAX; ++i)
	{
		cout << "Value of var[" << i << "] = ";
		cout << *ptr[i] << endl;
		cout << "Address of var[" << i << "] = ";
		cout << ptr[i] << endl;
	}
	return 0;
}




// 指向指针的指针

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;
	ptr = &var;
	pptr = &ptr;

	cout << "Value of var: " << var << endl;
	cout << "Value available at *ptr: " << *ptr << endl;
	cout << "Value available at **pptr: " << **pptr << endl;

	return 0;
}



//传递指针给函数
#include <iostream>
#include <ctime>

using namespace std;

void getSeconds(unsigned long *par);

int main(int argc, char const *argv[])
{
	unsigned long sec;
	getSeconds(&sec);

	//输出实际值
	cout << "Number of seconds: " << sec <<endl;

	return 0;
}


// 传递一个无符号的long型指针给函数，并在函数内改变这个值
void getSeconds(unsigned long *par)
{
	// 获取当前秒数
	*par = time(NULL);
	return;
}




// 能接受指针作为参数的函数也能接受数组作为参数
#include <iostream>
using namespace std;


double getAverage(int *arr,int size);

int main(int argc, char const *argv[])
{
	int balance[5] = {1000,2,3,17,50};
	double avg;

	//传递一个指向数组的指针作为参数
	avg = getAverage(balance,5);

	cout << "Average value is: " << avg << endl;

	return 0;
}

double getAverage(int *arr,int size)
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


*/

//c++从函数返回指针
//必须声明返回指针的函数
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


// 要生成和返回随机数的函数
int *getRandom()
{
	static int r[10];
	srand((unsigned) time (NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}
}


int main()
{
	// 一个指向整数的指针
	int *p;
	
	p = getRandom();

	for (int i = 0; i < 10; ++i)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p+i) << endl;
	}

	return 0;
}























