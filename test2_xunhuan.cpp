/*

// 循环类型

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	// while 循环
	int a = 30;
	while(a>20)
	{
		cout << "value of a is: " << a << endl;
		a--;
	}



	// for 循环
	for (int i = 0; i < 10; i++)
	{
		cout << "value of i is: " << i << endl;
	}

	
	// do...while 循环 至少执行一次循环
	int b = 10;
	do
	{
		cout << "value of b is： " << b << endl;
		b += 1;
	}
	while(b < 20);

	return 0;
}




// 循环控制语句
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	


	// break 语句
	int a = 10;
	do
	{
		cout << "value of a is: " << a << endl;
		a += 1;
		if (a>15)
		{
			//终止循环
			break;
		}
	}
	while( a <20);

	cout << "\n\n\n" << endl;




	// continue 语句
	int b=10;
	do
	{
		if (b==15)
		{
			// 跳过迭代
			b+=1;
			continue;
		}
		cout << "value of b is: " << b << endl;
		b+=1;
	}
	while(b < 20);
	cout << "\n\n\n" << endl;

	// goto 语句 允许把控制无条件转移到同意函数内的被标记的语句
	// 一般不建议使用
	int c = 10;
	LOOP:do
	{
		if (c == 15)
		{
			c +=1;
			goto LOOP;
		}
		cout << "value of c is: " << c << endl;
		c++;
	} while (c<20);

	return 0;
}

*/

// 无限循环
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for ( ; ; )
	{
		cout << "This loop will run forever.\n" << endl;
	}
	return 0;
}

