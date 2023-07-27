/*
Author: Karim Tarek Ibrahim
Problem name: Good Number
Problem link: https://codeforces.com/problemset/problem/365/A
Date: 27/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int arr1[10];
bool arr2[10];

// Function to check if all elements of the boolean array are false
bool isTrueArray(int n, bool arr[])
{
	bool flag = true;
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] == true)
			continue;
		else
		{
			flag = false;
			break;
		}
	}
	return flag;
}
 
int main()
{
	
	string s;
	int n, k, c = 0;
	cin >> n >> k;
	for (int i = 0; i <= k; i++)
		arr1[i] = i;
 
	while (n--)
	{
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			int num = s[i] - '0';
			for (int j = 0; j <= k; j++)
			{
				if (num == arr1[j])
				{
					arr2[j] = true;
					break;
				}
			}
		}
		
		if (isTrueArray(k, arr2))
			c++;
 
		for (int i = 0; i <= k; i++)
			arr2[i] = false;
	}
 
	cout << c;
	
 
	return 0;
}
