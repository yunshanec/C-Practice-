/*
// if else 语句
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 40;

	if (a<20)
	{
		cout << "a 小于 20" << endl;
	}
	else if (a == 20)
	{
		cout << "a 等于 20" << endl;
	}
	else
	{
		cout << "a 大于 20" << endl;
	}

	cout << "a 的值是： " << a << endl;
	
	return 0;
}


// 嵌套if语句
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 100;
	int b = 200;
	if (a == 100)
	{
		if(b == 200)
		{
			cout << "value of a is 100,and b is 200" << endl;

		}
	}

	return 0;
}	

*/



// switch 语句
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char grade = 'B';
	switch(grade)
	{
		case 'A':
			cout << "Good" << endl;
			break;
		case 'B':
			cout << "Nice" << endl;
			break;
	}
	cout << "your grade is: " << grade << endl;
	return 0;
}
