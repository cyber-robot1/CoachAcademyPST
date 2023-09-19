/*
Author: Karim Tarek Ibrahim
Problem name: Tit for Tat
Problem link: https://codeforces.com/problemset/problem/1516/A
Date: 20/9/2023
*/

#include <iostream>
using namespace std;
 
int arr[100];
int main()
{
	
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
 
		bool flag = true;
		while (k)
		{
			for (int i = 0; i < n && k;)
			{
				if (i == n - 1)
				{
					flag = false;
					break;
				}
				else
				{
					if (arr[i] > 0 && k)
					{
						arr[i]--;
						arr[n - 1]++;
						k--;
					}
					else
						i++;
				}
			}
			if (!flag)
				break;
		}
		
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
 
	return 0;
}
