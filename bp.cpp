#include<iostream>
using namespace std;
//ͨ��Ĭ�����������Ѿ��㹻�ˣ�����Ҫ���ͷŶ���ʱ�������һЩ��������ʾ����
class string_data
{
public:
	string_data(str* s)
	{
		str = new char[strlen(s) + 1];    // ��̬�������ݳ�Ա
		strcpy(str, s);
	}
	~string_data()
	{
		delete str;             //�ͷſռ�
	}
private:
	char* str
};