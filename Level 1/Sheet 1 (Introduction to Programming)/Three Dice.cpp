/*
Author: Karim Tarek Ibrahim
Problem name: Three Dice
Problem link: https://atcoder.jp/contests/abc202/tasks/abc202_a
Date: 4/5/2023
*/

#include <iostream>
using namespace std;

int main()
{

	int a, b, c;
	cin >> a >> b >> c;
	a = 7 - a;
	b = 7 - b;
	c = 7 - c;
	cout << a + b + c << endl;

	return 0;
}
