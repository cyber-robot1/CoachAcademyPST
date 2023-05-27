/*
Author: Karim Tarek Ibrahim
Problem name: qwerty
Problem link: https://atcoder.jp/contests/abc218/tasks/abc218_b
Date: 18/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int n = 26;
	int x, y;
	while (n--)
	{
		cin >> x;
		y = x + 96;
		cout << char(y);
		y = 0;
	}

	return 0;
}
