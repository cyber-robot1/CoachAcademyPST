/*
Author: Karim Tarek Ibrahim
Problem name: Bit++
Problem link: https://codeforces.com/problemset/problem/282/A
Date: 19/5/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	int n, x = 0;
	char a, b, c;
	cin >> n;
 
	while (n--)
	{
		cin >> a >> b >> c;
		if (a == 'X')
		{
			if (b == '+' && c == '+')
				x++;
			else
				x--;
		}
		else
		{
			if (a == '+' && b == '+')
				x++;
			else
				x--;
		}
	}
	
	cout << x;
 
	return 0;
}
