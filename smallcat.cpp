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
	small_cat(string name1, float weight1);   //���캯��
	void cat_display();        //չʾÿֻè�����ֺ�����
	static void total_display(); //��̬������Աһ�㲻����Ǿ�̬���ݳ�Ա�����򽫶�����Ϊ�β�
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
	cout << "\n���֣�" << name;
	cout << "\n������" << weight<<"kg";
	cout << "\n-------------------------\n";
}
void small_cat::total_display()
{
	cout << "\nСè��" << total_num << "������������" << total_weight << "kg"<<endl;
}
float small_cat::total_weight = 0;
int small_cat::total_num = 0;
int main()
{
	small_cat::total_display();
	small_cat cat1("�𽥲�", 35);
	small_cat cat2("������", 30);
	small_cat cat3("Ӣ��",40);
	cat1.cat_display();
	cat2.cat_display();
	cat3.cat_display();
	small_cat::total_display();
	return 0;
}