/*
Author: Karim Tarek Ibrahim
Problem name: Single Push
Problem link: https://codeforces.com/problemset/problem/1253/A
Date: 20/9/2023
*/

#include <iostream>
using namespace std;
 
int a[100001], b[100001];
 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
 
		for (int i = 0; i < n; i++)
			cin >> b[i];
 
		bool tmp = true, flag = true;
		if (n == 1)
		{
			if (a[0] > b[0])
				tmp = false;
		}
 
		else
		{
			int l = 0, r = 0, k = 0;
 
			// find l
			for (int i = 0; i < n; i++)
			{
				if (a[i] != b[i])
				{
					l = i;
					break;
				}
			}
 
			// find r
			for (int i = n - 1; i >= 0; i--)
			{
				if (a[i] != b[i])
				{
					r = i;
					break;
				}
			}
 
			if (abs(a[l] - b[l]) == abs(a[r] - b[r]))
			{
				k = abs(a[l] - b[l]);
				if (a[l] < b[l])
				{
					for (int i = l; i <= r; i++)
					{
						a[i] = a[i] + k;
					}
				}
			}
 
			for (int i = l; i <= r; i++)
			{
				if (a[i] == b[i])
					continue;
				else
				{
					flag = false;
					break;
				}
			}
		}
		
		if (flag && tmp)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}
