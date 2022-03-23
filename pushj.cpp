#include<iostream>
using namespace std;
class exam
{
public:
	exam(int n = 0) {}
	~exam(){}
	void show();
private:
	int x;
};
void exam::show()
{
	cout << x;
}
int main()
{
	exam stu[4];
	exam stu1[3];
	exam* p = new exam[2];
	exam* pr = stu;
	return 0;
}