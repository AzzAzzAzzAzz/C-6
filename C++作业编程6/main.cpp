#include<iostream>
#include"Myset.h"
#include<ctime>
using namespace std;

int main()
{
	int n;
	Myset set;
	srand(time(0));
	cout << "请输入生成随机整数的个数：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = rand() % 101;
		set.add(x);
	}
	cout << "集合中的数据：";
	set.show();
	cout << endl;
	cout << "请输入一个整数：";
	cin >> n;
	while (!set.contains(n))
	{
		cout << "请再次输入一个整数：";
		cin >> n;
	}
	set.remove(n);
	cout << "移除" << n << "之后集合中的数据：";
	set.show();

	return 0;
}