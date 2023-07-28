/*
Author: Karim Tarek Ibrahim
Problem name: Gravity Flip
Problem link: https://codeforces.com/problemset/problem/405/A
Date: 28/7/2023
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

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
