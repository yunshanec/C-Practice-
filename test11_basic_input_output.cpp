/*
// 标准输出流（cout）和标准输入流(cin)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "Hello world";
	cout << "Value of str is: " << str << endl;

	char email[50];
	char name[20];
	cout << "input your email&name: ";
	cin >> email >> name;
	cout <<"your email&name is : " << email << name << endl;

}



// 标准错误流
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "Unable to read......";
	cerr << "Error message: " << str << endl;
	return 0;
}



*/

//标准日志流
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "Unable to read......";
	clog << "Error message: " << str << endl;

	return 0;
}





























