#include<iostream>
using namespace std;
//���Ƕ����Ա�����ĵ����ַ��������뽫�����Ͷ������ͬһ��ͷ�ļ��У���������޷�����
class point
{
private:
	int x, y;
public:
	inline void set_point(int, int);    //�������Բ�ָ���β�����
	inline int getx();
	inline int gety();
};
inline void point::set_point(int a, int b)
{
	x = a; y = b;
}
inline int point::getx()
{
	return x;
}
inline int point::gety()            //�����֤����inlineȡ��һ�ͺ�
{
	return y;
}
int main()
{
	point A;
	A.set_point(1, 3);
	cout << "x=" << A.getx() << ' ' << "y = " << A.gety() << endl;
	return 0;
}