#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	// 创建一个向量vec 存储int
	vector<int> vec;
	int i;

	cout << "vector size = " << vec.size() << endl;

	for (int i = 0; i < 5; ++i)
	{
		vec.push_back(i); //推入5个值到向量中
	}

	cout << "extended vector size = " << vec.size() << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	vector<int>::iterator v = vec.begin();
	while(v != vec.end())
	{
		cout << "value of v = " << *v << endl;
		v++;
	}

	return 0;
}
