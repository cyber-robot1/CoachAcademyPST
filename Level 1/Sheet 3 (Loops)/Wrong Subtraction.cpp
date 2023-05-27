/*
Author: Karim Tarek Ibrahim
Problem name: Wrong Subtraction
Problem link: https://codeforces.com/problemset/problem/977/A
Date: 18/5/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n, k;
	cin >> n >> k;
 
	while (k--)
	{
		if (n % 10 == 0)
			n /= 10;
		else
			n -= 1;
	}
	cout << n;
 
 
	return 0;
}
