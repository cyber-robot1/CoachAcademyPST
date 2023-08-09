/*
Author: Karim Tarek Ibrahim
Problem name: Dice Tower
Problem link: https://codeforces.com/problemset/problem/225/A
Date: 9/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
// function to return No. of 0's in a given array
int numZeros(bool arr[])
{
	int c = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == 0)
			c++;
	}
	return c;
}
 
// function to return the non-zero element in a given array
int nonZeros(int arr[])
{
	int c = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] != 0)
		{
			c = arr[i];
			break;
		}
	}
	return c;
}
 
bool arr1[6];
int arr2[5], tmp[6], a[101], b[101];
int main()
{
	
	int n, x;
	bool flag = true;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
 
	for (int i = 0; i < 6; i++)
		arr1[i] = false;
 
	for (int i = 0; i < 6; i++)
		tmp[i] = i + 1;
 
	for (int i = 1; i < n; i++)
	{
		arr2[0] = a[i];
		arr2[1] = b[i];
		arr2[2] = 7 - a[i];
		arr2[3] = 7 - b[i];
		arr2[4] = 7 - x;
		sort(arr2, arr2 + 5);
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (arr2[i] == (j + 1))
				{
					arr1[j] = true;
					break;
				}
			}
		}
		int zero = numZeros(arr1);
		if (zero == 1)
		{
			flag = true;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if (arr2[i] == tmp[j])
					{
						tmp[j] = 0;
						break;
					}
				}
			}
			int num = nonZeros(tmp);
			x = num;
			continue;
		}
		else
		{
			flag = false;
			break;
		}
	}
 
	if (flag)
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}
