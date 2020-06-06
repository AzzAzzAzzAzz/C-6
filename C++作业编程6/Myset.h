#pragma once
#define MAX 100000
class Myset
{
public:
	Myset():n(0) {}
	bool add(int x);
	void remove(int x);
	void show();
	bool contains(int x);

private:
	int d[MAX];
	int n;
	int Pos(int x);
};

