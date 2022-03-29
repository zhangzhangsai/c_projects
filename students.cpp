#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	string name;
	string stu_no;
	float score;
	static float sum;
	static float ave;
	 static int count;
public:
	student(string name1, string stu_no1, float score1);
	~student();
	void show();
	void show_count_sum_ave();
};
student::student(string name1, string stu_no1, float score1)
{
	name = name1;
	stu_no = stu_no1;
	score = score1;
	count++;
	sum += score;
	ave = sum / count;
}
student::~student()
{
	count--;
	sum -= score;
}
void student::show()
{
	cout << "\n 姓名：" << name;
	cout << "\n 学号：" << stu_no;
	cout << "\n 分数：" << score;
}
void student::show_count_sum_ave()
{
	cout << "\n 学生人数：" << count;
	cout << "\n 平均成绩：" << ave;
}
float student::ave = 0.0;
float student::sum = 0.0;
int student::count = 0;
int main()
{
	student stu1("田欣浩", "21408030211", 250);
	stu1.show();
	stu1.show_count_sum_ave();
	cout << "\n-----------------------\n";
	student stu2("田欣浩的父亲-张赛", "21408030210", 500);
	stu2.show();
	stu2.show_count_sum_ave();
	return 0;
}