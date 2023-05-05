/*
Author: Karim Tarek Ibrahim
Problem name: Elephant
Problem link: https://codeforces.com/problemset/problem/617/A
Date: 4/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int x, steps = 0;
	cin >> x;

	if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
		cout << 1 << endl;

	else if (x > 5)
	{
		while (x >= 5)
		{
			x = x - 5;
			steps++;
			if (x == 1 || x == 2 || x == 3 || x == 4)
				steps++;
			else
				continue;
		}

		cout << steps;
	}

	return 0;
}
