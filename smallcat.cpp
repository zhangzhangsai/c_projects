#include<iostream>
#include<string>
using namespace std;
class small_cat
{
private:
	string name;
	float weight;
	static float total_weight;
	static int total_num;
public:
	small_cat(string name1, float weight1);   //构造函数
	void cat_display();        //展示每只猫的名字和重量
	static void total_display(); //静态函数成员一般不处理非静态数据成员，若则将对象作为形参
};
small_cat::small_cat(string name1, float weight1)
{
	name = name1;
	weight = weight1;
	total_num++;
	total_weight += weight;
}
void small_cat::cat_display()
{
	cout << "\n名字：" << name;
	cout << "\n重量：" << weight<<"kg";
	cout << "\n-------------------------\n";
}
void small_cat::total_display()
{
	cout << "\n小猫有" << total_num << "个，总质量是" << total_weight << "kg"<<endl;
}
float small_cat::total_weight = 0;
int small_cat::total_num = 0;
int main()
{
	small_cat::total_display();
	small_cat cat1("金渐层", 35);
	small_cat cat2("银渐层", 30);
	small_cat cat3("英短",40);
	cat1.cat_display();
	cat2.cat_display();
	cat3.cat_display();
	small_cat::total_display();
	return 0;
}