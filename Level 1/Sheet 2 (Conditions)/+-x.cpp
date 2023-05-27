/*
Author: Karim Tarek Ibrahim
Problem name: +-x
Problem link: https://atcoder.jp/contests/abc137/tasks/abc137_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int X = A + B, Y = A - B, Z = A * B;

	if (X >= Y && X >= Z)
		cout << X << endl;
	else if (Y >= X && Y >= Z)
		cout << Y << endl;
	else
		cout << Z << endl;


	return 0;
}
