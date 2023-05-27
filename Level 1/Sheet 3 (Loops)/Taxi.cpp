/*
Author: Karim Tarek Ibrahim
Problem name: Taxi
Problem link: https://codeforces.com/contest/158/problem/B
Date: 27/5/2023
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int arr[100001];
int main()
{
	
	int n, taxi = 0;
	int one = 0, two = 0, three = 0, four = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
			one++;
		else if (arr[i] == 2)
			two++;
		else if (arr[i] == 3)
			three++;
		else if (arr[i] == 4)
			four++;
	}
 
	taxi += four;
	four = 0;
 
	if (two > 0)
	{
		if (two % 2 == 0)
		{
			taxi = taxi + (two / 2);
			two = 0;
		}
		else
		{
			taxi = taxi + (two / 2);
			two = two % 2;      
		}
	}
 
	if (three > 0 && one > 0)
	{
		if (three > one)
		{
			three = three - one;
			taxi = taxi + one;
			one = 0;
		}
		else if (three < one)
		{
			one = one - three;
			taxi = taxi + three;
			three = 0;
		}
		else if (three == one)
		{
			taxi = taxi + one;
			three = 0;
			one = 0;
		}
	}
 
	if (two > 0 && one > 0)
	{
		if (one % 2 == 0)
		{
			one = one - 2;
			two = 0;
			taxi++;
		}
		else
		{
			if (one > 1)            
			{
				one = one - 2;
				two = 0;
				taxi++;
			}
 
			
			else
			{
				one = 0;
				two = 0;
				taxi++;
			}
			
		}
	}
 
	if (one > 0)
	{
		if (one % 4 == 0)
		{
			taxi = taxi + (one / 4);
			one = 0;
		}
		else                                 
		{
			if (one > 3)                                           
			{
				taxi = taxi + (one / 4);
				one = one % 4;
			}
			else                                         
			{
				one = 0;
				taxi++;
			}
		}
		int res = 0;
		res = ceil((double)one / 4);
		taxi = taxi + res;
	}
	
	taxi = taxi + (two + three);
	cout << taxi;
 
 
	return 0;
}
