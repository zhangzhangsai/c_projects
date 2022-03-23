//对象为数组的类的构造函数
#include<iostream>
using namespace std;
class exam
{
private:
	int x;
public:
	exam();
	exam(int ); // 构造函数重载
	~exam() {}; //析构函数
	int get();
};
exam::exam():x(29){}
exam::exam(int a):x(a){}
int exam::get()
{
	return x;
}
int main()
{
	exam ob1[4] = {};
	exam ob2[4] = { 1,3 };
	for (int i = 0; i < 4; i++)
	{
		cout << "exam = " << ' ' << ob1[i].get();

		cout << "exam = " << ' ' << ob2[i].get();

	}
	return 0;
}