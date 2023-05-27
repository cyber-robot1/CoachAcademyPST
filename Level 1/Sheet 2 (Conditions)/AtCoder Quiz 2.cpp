/*
Author: Karim Tarek Ibrahim
Problem name: AtCoder Quiz 2
Problem link: https://atcoder.jp/contests/abc219/tasks/abc219_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;
	if (X >= 0 && X < 40)
		cout << 40 - X;

	else if (X >= 40 && X < 70)
		cout << 70 - X;
	
	else if (X >= 70 && X < 90)
		cout << 90 - X;

	else if (X >= 90)
		cout << "expert";	

	return 0;
}
