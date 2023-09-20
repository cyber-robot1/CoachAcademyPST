/*
Author: Karim Tarek Ibrahim
Problem name: Dense Array
Problem link: https://codeforces.com/problemset/problem/1490/A
Date: 20/9/2023
*/

#include <iostream>
using namespace std;
 
int arr[51];
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, c = 0, mn = 0, mx = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
 
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
				break;
			else
			{
				mx = max(arr[i], arr[i + 1]);
				mn = min(arr[i], arr[i + 1]);
				
				if (mx > (2 * mn))
				{
					int j = mn * 2;
					for (j; j <= mx; j *= 2)
					{
						if (j == mx)
							break;
						else
							c++;
					}
				}
			}
		}
		cout << c << endl;
	}
 
	return 0;
}
