/*
Author: Karim Tarek Ibrahim
Problem name: Chores
Problem link: https://codeforces.com/problemset/problem/837/A
Date: 28/7/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
	
	int n, k, x, sum = 0;
	cin >> n >> k >> x;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = n - 1; k != 0; i--, k--)
	{
		sum = sum + x;
		arr[i] = 0;
	}
 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			break;
		else
			sum = sum + arr[i];
	}
	
	cout << sum;
 
	return 0;
}
