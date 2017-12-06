// NEXT PERM.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;
int a[10000], n, k;
int main()
{
	cin >> n >> k;
	int index = 0;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[j];
		}
		for (int j = n - 1; j > 0; --j)
		{
			if (a[j - 1] < a[j])
			{
				index = j - 1;
				j = 0;
			}
		}
		int lowest = index;
		int distance = 10000;
		for (int j = n-1;j > index; --j)
		{
			if (a[j] > a[index])
			{
				lowest = j;
				j = index;
			}
		}
		swap(a[index], a[lowest]);
		sort(a + index + 1, a + n);
		for (int j = 0; j < n; ++j)
		{
			cout << a[j] << " ";
		}
	}
	return 0;
}

