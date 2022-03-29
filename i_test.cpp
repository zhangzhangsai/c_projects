#include<iostream>
#include<string>
using namespace std;
//一个函数同时定义为两个类的友元函数
class girl;
class boy
{
public:
	boy(string _name, int _age);
	boy(const boy& _boy);
	friend void prdata(const boy& b, const girl& g);
private:
	string name;
	int age;
};
boy::boy(string _name, int _age)
{
	name = _name;
	age = _age;
}
boy::boy(const boy& _boy)
{
	name = _boy.name;
	age = _boy.age;
}
class girl
{
public:
	girl(string _name, int _age);
	girl(const girl& _girl);
	friend void prdata(const boy& b, const girl& g);
private:
	string name;
	int age;
};
girl::girl(string _name, int _age)
{
	name = _name; age = _age;
}
girl::girl(const girl& g)
{
	name = g.name; age = g.age;
}
void prdata(const boy& b, const girl& g)
{
	cout << "girl is name:" << g.name << endl;
	cout << "girl is num:" << g.age << endl;
	cout << "boy is name:" << b.name << endl;
	cout << "boy is num:" << b.age << endl;
}
int main()
{
	boy boy_one("小明", 13);
	boy boy_two("小k", 15);
	girl girl_one("xiaohong", 13);
	girl girl_two("yanghan", 14);
	prdata(boy_one, girl_one);
	prdata(boy_two, girl_two);

	return 0;
}