#include<iostream>
using namespace std;
//通常默认析构函数已尽足够了，但是要在释放对象时完成另外一些工作则显示定义
class string_data
{
public:
	string_data(str* s)
	{
		str = new char[strlen(s) + 1];    // 动态创建数据成员
		strcpy(str, s);
	}
	~string_data()
	{
		delete str;             //释放空间
	}
private:
	char* str
};