/*
Author: Karim Tarek Ibrahim
Problem name: Tram
Problem link: https://codeforces.com/problemset/problem/116/A
Date: 3/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[1001];
int main()
{
	
	int n, c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		c = c - a;
		c = c + b;
		arr[i] = c;
	}
	
	cout << *max_element(arr, arr + n);
 
	return 0;
}
