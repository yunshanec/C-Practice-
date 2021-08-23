#include <iostream>
// using namespace std;
using std::endl;

namespace first_space
{
	void func()
	{
		std::cout << "Inside first_space." << endl;
	}
}

namespace second_space
{
	void func()
	{
		std::cout << "Inside second_space." << endl;
	}
}

using namespace first_space;

int main(int argc, char const *argv[])
{
	// 调用第一个命名空间的函数
	// first_space::func();
	func();

	// // 调用第二个命名空间的函数
	// second_space::func();

	return 0;
}