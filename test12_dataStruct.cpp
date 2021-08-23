/*
// 定义结构 访问结构成员
#include <iostream>
#include <cstring>
using namespace std;

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(int argc, char const *argv[])
{
	struct Books Book1; //声明 Book1， 类型为Books
	struct Books Book2;

	// Book1详述
	strcpy(Book1.title,"Learn c++ programming");
	strcpy(Book1.author,"Chand Miyan");
	strcpy(Book1.subject,"C++ programming");
	Book1.book_id = 64954;


	// 输出 Book1 信息
	cout << "Book 1 title : " << Book1.title <<endl;
	cout << "Book 1 author : " << Book1.author <<endl;
	cout << "Book 1 subject : " << Book1.subject <<endl;
	cout << "Book 1 id : " << Book1.book_id <<endl;

	return 0;
}


// 结构作为函数参数
#include <iostream>
#include <cstring>

using namespace std;

void printBook( struct Books book);

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(int argc, char const *argv[])
{
	struct Books Book1; //声明 Book1， 类型为Books
	struct Books Book2;

	// Book1详述
	strcpy(Book1.title,"Learn c++ programming");
	strcpy(Book1.author,"Chand Miyan");
	strcpy(Book1.subject,"C++ programming");
	Book1.book_id = 64954;

	printBook(Book1);

	return 0;
}


void printBook(struct Books book)
{
	cout << "Book title : " << book.title <<endl;
	cout << "Book author : " << book.author <<endl;
	cout << "Book subject : " << book.subject <<endl;
	cout << "Book id : " << book.book_id <<endl;
}


*/

// 指向结构的指针
#include <iostream>
#include <cstring>

using namespace std;
void printBook(struct Books *book);

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(int argc, char const *argv[])
{
	struct Books Book1; //声明 Book1， 类型为Books

	// Book1详述
	strcpy(Book1.title,"Learn c++ programming");
	strcpy(Book1.author,"Chand Miyan");
	strcpy(Book1.subject,"C++ programming");
	Book1.book_id = 64954;

	printBook(&Book1);
	return 0;
}

void printBook(struct Books *book)
{
	cout << "Book title : " << book->title <<endl;
	cout << "Book author : " << book->author <<endl;
	cout << "Book subject : " << book->subject <<endl;
	cout << "Book id : " << book->book_id <<endl;
}











