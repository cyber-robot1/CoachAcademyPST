/*
Author: Karim Tarek Ibrahim
Problem name: Count Order
Problem link: https://atcoder.jp/contests/abc150/tasks/abc150_c
Date: 3/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int P[8], Q[8], arr1[8], arr2[8];
int main()
{
	
	int n, a = 0, b = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> P[i];
	for (int i = 0; i < n; i++)
		cin >> Q[i];
	
	int c = 1;
	for (int i = 0; i < n; i++, c++)
	{
		arr1[i] = c;
		arr2[i] = c;
	}
	
	// search for the index of the permutation P
	int tmp1 = 1;
	bool flag1 = true;
	for (int i = 0; i < n; i++)
	{
		if (P[i] == arr1[i])
			continue;

		else
		{
			flag1 = false;
			break;
		}
	}
	if (flag1)
		a = tmp1;
	else
	{
		
		while (next_permutation(arr1, arr1 + n))
		{
			tmp1++;
			flag1 = true;
			for (int i = 0; i < n; i++)
			{
				if (P[i] == arr1[i])
					continue;
				else
				{
					flag1 = false;
					break;
				}

			}
			if (flag1)
			{
				a = tmp1;
				break;
			}
			else
				continue;
		}
	}
	
	// search for the index of permutation Q
	int tmp2 = 1;
	bool flag2 = true;
	for (int i = 0; i < n; i++)
	{
		if (Q[i] == arr2[i])
			continue;

		else
		{
			flag2 = false;
			break;
		}
	}
	if (flag2)
		b = tmp2;
	else
	{

		while (next_permutation(arr2, arr2 + n))
		{
			tmp2++;
			flag2 = true;
			for (int i = 0; i < n; i++)
			{
				if (Q[i] == arr2[i])
					continue;
				else
				{
					flag2 = false;
					break;
				}

			}
			if (flag2)
			{
				b = tmp2;
				break;
			}
			else
				continue;
		}
	}
	cout << abs(a - b);


	return 0;
}
