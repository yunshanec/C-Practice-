#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
	//获取当前系统的日期/时间
	time_t now = time(0);

	cout << "1970年1月1日到现在经过的秒数: " << now << endl;
	tm *ltm = localtime(&now);
	// 输出 tm 结构的各个组成部分
	cout << "年: "<< 1900 + ltm->tm_year << endl;
	cout << "月: "<< 1 + ltm->tm_mon<< endl;
	cout << "日: "<<  ltm->tm_mday << endl;
	cout << "时间: "<< 1 + ltm->tm_hour << ":";
	cout << 1 + ltm->tm_min << ":";
	cout << 1 + ltm->tm_sec << endl;




	// 把now转换为字符串形式
	char* dt = ctime(&now);

	cout << "本地日期和时间: " << dt << endl;

	// 把now转换为 tm 结构
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC 日期和时间： " << dt << endl;
 
	return 0;
}