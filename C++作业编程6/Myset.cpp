#include "Myset.h"
#include<iostream>
using namespace std;


int Myset::Pos(int x)
{
	int i = 0, j = n - 1, k = (i + j) / 2;
	while (true)
	{
		if (d[k] == x)
		{
			return k;
		}
		if (d[k] > x)
		{
			j = k - 1;
		}
		else
		{
			i = k + 1;
		}
		if (i > j)
		{
			return -1;
		}
		else 
		{
			k = (i + j) / 2;
		}
	}
}
bool Myset::contains(int x)
{
	if (Pos(x) == -1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void Myset::remove(int x)
{
	int pos = Pos(x);
	if (pos > -1)
	{
		for (int i = pos; i < n - 1; i++)
		{
			d[i] = d[i + 1];
		}
		--n;
	}

}
void Myset::show()
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << d[i];
		}
		else
		{
			cout << "," << d[i];
		}
	}
}
bool Myset::add(int x)
{

		if (n >= MAX)
			return  false;
		int i = 0, j = n - 1, k = (i + j) / 2;
		if (n == 0)
		{
			d[0] = x;
			++n;
			return true;
		}
		while (true)
		{
			if (d[k] == x)
				return  true;
			if (d[k] > x)
				j = k - 1;
			else
				i = k + 1;
			if (i > j)
				break;
			k = (i + j) / 2;
		}
		if (d[k] > x)
		{
			for (int m = n - 1; m >= k; m--)
			{
				d[m + 1] = d[m];
			}
			d[k] = x;
		}
		else
		{
			for (int m = n - 1; m > k; m--)
			{
				d[m + 1] = d[m];
			}
			d[k + 1] = x;
		}
		++n;
		return true;
}


