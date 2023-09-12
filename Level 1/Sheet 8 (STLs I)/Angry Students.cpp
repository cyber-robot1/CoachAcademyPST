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
			bool tmp = false;
			for (int i = 0; i < n; i++)
			{
				if (arr[i] == 'A' && arr[i + 1] == 'P')
				{
					arr[i + 1] = 'A';
					tmp = true;    
					i++;
				}
			}
			if (!tmp)
				break;
			c++;
		}
		cout << c << endl;
	}
 
	return 0;
}
