/*
Author: Karim Tarek Ibrahim
Problem name: Hit the Lottery
Problem link: https://codeforces.com/problemset/problem/996/A
Date: 4/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	long long n, n100, n20, n10, n5, n1, flag = 0;
	cin >> n;

	if (n >= 100)
	{
		n100 = n / 100;
		n = n - (n100 * 100);
		flag = flag + n100;
	}

	if (n >= 20)
	{
		n20 = n / 20;
		n = n - (n20 * 20);
		flag = flag + n20;
	}

	if (n >= 10)
	{
		n10 = n / 10;
		n = n - (n10 * 10);
		flag = flag + n10;
	}

	if (n >= 5)
	{
		n5 = n / 5;
		n = n - (n5 * 5);
		flag = flag + n5;
	}

	if (n >= 1)
	{
		n1 = n / 1;
		n = n - (n1 * 1);
		flag = flag + n1;
	}

	cout << flag;

	return 0;
}
