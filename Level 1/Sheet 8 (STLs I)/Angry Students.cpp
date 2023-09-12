/*
Author: Karim Tarek Ibrahim
Problem name: Angry Students
Problem link: https://codeforces.com/problemset/problem/1287/A
Date: 13/9/2023
*/

#include <iostream>
using namespace std;
 
char arr[101];
int main()
{
	int n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int c = 0;
		while (true)
		{
			bool flag = false, tmp = false;
			for (int i = 0; i < n; i++)
			{
				if (i == n - 1)
					break;
				else
				{
					if (flag)
					{
						flag = false;
						continue;
					}
					else
					{
						if (arr[i] == 'A')
						{
							if (arr[i + 1] == 'P')
							{
								arr[i + 1] = 'A';
								flag = true;
								tmp = true; 
							}
						}
					}
				}
			}
 
			if (tmp)
			{
				c++;
				continue;
			}
			else
				break;
		}
		cout << c << endl;
	}
 
	return 0;
}

