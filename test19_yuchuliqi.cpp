#include <iostream>
using namespace std;

#define DEBUG

#define PI 3.1415926
#define MIN(a,b) (((a) < (b)) ? a:b)





int main(int argc, char const *argv[])
{
	cout << "Value of PI : " << PI << endl;
	int i,j;
	i = 100;
	j = 200;

#ifndef DEBUG
	cerr << "Trace:Inside main function" <<endl;
#endif
	cout << "The minimunm is : " << MIN(i,j) << endl;

	cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

	return 0;
}