/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double *pvalue = NULL; // 初始化为NULL的指针
	pvalue = new double; // 为变量请求内存

	*pvalue = 123.89; // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue; //释放内存

	return 0;
}



// 对象的动态内存分配
#include <iostream>
using namespace std;

class Box
{
public:
	Box()
	{
		cout << "using init function..." << endl;
	}

	~Box()
	{
		cout << "using delete function..." << endl;
	}
	
};

int main(int argc, char const *argv[])
{
	Box *myBoxArray = new Box[4];

	delete [] myBoxArray;


	return 0;
}

*/

// 数组的动态内存分配

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ROW = 2;
	int COL = 3;

	double **pvalue = new double *[ROW]; //为行分配内存

	//为列分配内存
	for (int i = 0; i < COL; ++i)
	{
		pvalue[i] = new double[COL];
	}

	cout << "分配内存完成" << endl;

	return 0;
}




















