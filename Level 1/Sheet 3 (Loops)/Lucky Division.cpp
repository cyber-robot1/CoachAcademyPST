/*
Author: Karim Tarek Ibrahim
Problem name: Lucky Division
Problem link: https://codeforces.com/problemset/problem/122/A
Date: 18/5/2023
*/

#include <iostream>
using namespace std;
 
int numDigits(int n)
{
	int c = 0, temp;
	temp = n;
	while (temp)
	{
		temp /= 10;
		c++;
	}
	return c;
}
 
int main()
{
	
	int n;
	bool flag = true;
	cin >> n;
	if (n == 1000)
		cout << "YES";
	else
	{
		if (numDigits(n) == 1)
		{
			if (n % 4 == 0 || n % 7 == 0)
				flag = true;
 
			else
				flag = false;
		}
		else if (numDigits(n) == 2)
		{
			if (n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0)
				flag = true;
 
			else if (n % 4 == 0 || n % 7 == 0)
				flag = true;
 
			else
				flag = false;
		}
		else if (numDigits(n) == 3)
		{
			if (n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0)
				flag = true;
 
			else if (n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0)
				flag = true;
 
			else if (n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0)
				flag = true;
 
			else if (n % 4 == 0 || n % 7 == 0)
				flag = true;
 
			else
				flag = false;
		}
		if (flag)
			cout << "YES";
		else
			cout << "NO";
	}
 
 
	return 0;
}
