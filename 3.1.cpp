#include<iostream>
using namespace std;
//��ʽ��������������������߳����Ч�ʣ��������ڳ�Ա�����൱��̣�
//��һ�ֶ����Ա�����ķ������ձ�
class point
{
private:
	int x, y;
public:
	void set_point(int a, int b)  //���������
	{
		x = a; y = b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};
int main()
{
	point A;
	A. set_point(2, 4);
	cout << "x=" << A.getx() << ' ' << "y=" << A.gety() << endl;
	return 0;
}