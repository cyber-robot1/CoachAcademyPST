/*
Author: Karim Tarek Ibrahim
Problem name: Currency System in Geraldion
Problem link: https://codeforces.com/problemset/problem/560/A
Date: 28/7/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[1001];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	sort(arr, arr + n);
 
	if (arr[0] == 1)
		cout << -1;
	else
		cout << 1;
	
 
	return 0;
}
