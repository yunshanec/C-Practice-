/*
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char gretting[] = "hello";
	cout << "Greeting message: ";
	cout << gretting << endl;

	return 0;
}


#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char str1[11] = "hello";
	char str2[11] = "world";
	char str3[11];
	int len;

	// copy str1 to str3
	strcpy(str3,str1);
	cout << "strcpy(str3,str1): " << str3 <<endl;

	// 连接str1 和 str2;
	strcat(str1,str2);
	cout << "strcat(str1,str2): " << str1 <<endl;

	len = strlen(str1);
	cout <<"strlen(str1): " << len << endl;

	return 0;
}

*/

// C++中的string类
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str1 = "Hello";
	string str2 = "world";
	string str3;
	int len;

	str3 = str1;
	cout << "str3: " << str3 << endl;
	
	str3 = str1 +str2;
	cout << "str1 + str2: " << str3 << endl;

	len = str3.size();
	cout << "str3.size(): " << len << endl;

	return 0;
}
