/*
Author: Karim Tarek Ibrahim
Problem name: Alloy
Problem link: https://atcoder.jp/contests/abc212/tasks/abc212_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > 0 && b == 0)
		cout << "Gold" << endl;
	else if (a == 0 && b > 0)
		cout << "Silver" << endl;
	else if (a > 0 && b > 0)
		cout << "Alloy" << endl;

	return 0;
}
