#include<iostream>
#include"Myset.h"
#include<ctime>
using namespace std;

int main()
{
	int n;
	Myset set;
	srand(time(0));
	cout << "������������������ĸ�����";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = rand() % 101;
		set.add(x);
	}
	cout << "�����е����ݣ�";
	set.show();
	cout << endl;
	cout << "������һ��������";
	cin >> n;
	while (!set.contains(n))
	{
		cout << "���ٴ�����һ��������";
		cin >> n;
	}
	set.remove(n);
	cout << "�Ƴ�" << n << "֮�󼯺��е����ݣ�";
	set.show();

	return 0;
}