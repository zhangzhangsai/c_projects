#include<iostream>
using namespace std;
class a
{
public:
	a();
	a(int, int, int);
	void show();
private:
	int year, month, day;
};
a::a() :month(12), year(1920), day(3){}
a::a(int y, int m, int d) :year(y), month(m), day(d){}
void a::show()
{
	cout << year << '.' << month << '.' << day << '.' << endl;
}
int main()
{
	a Day1;
	a Day2(1970, 1, 1);
	a* pday =new a (1970, 1, 1);
	pday->show();
	Day1.show();
	Day2.show();
	delete pday;
	return 0;
}