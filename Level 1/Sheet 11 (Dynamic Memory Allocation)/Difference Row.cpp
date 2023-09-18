/*
Author: Karim Tarek Ibrahim
Problem name: Difference Row
Problem link: https://codeforces.com/problemset/problem/347/A
Date: 19/9/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
 
	swap(arr[0], arr[n - 1]);
 
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
 
	return 0;
}
