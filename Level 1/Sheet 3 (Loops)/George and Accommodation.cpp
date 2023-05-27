/*
Author: Karim Tarek Ibrahim
Problem name: George and Accommodation
Problem link: https://codeforces.com/problemset/problem/467/A
Date: 18/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int n, p, q, c = 0;
	cin >> n;
	while (n--)
	{
		cin >> p >> q;
		if (q - p >= 2)
			c++;
	}
	cout << c;

	return 0;
}
