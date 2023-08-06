/*
Author: Karim Tarek Ibrahim
Problem name: Replacing Elements
Problem link: https://codeforces.com/problemset/problem/1473/A
Date: 6/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
int main()
{
	
	int t, n, d;
	cin >> t;
	while (t--)
	{
		cin >> n >> d;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > d)
				arr[i] = arr[0] + arr[1];
 
			if (arr[i] > d)
			{
				flag = false;
				break;
			}
		}
		
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}
