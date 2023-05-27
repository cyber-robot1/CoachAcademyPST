/*
Author: Karim Tarek Ibrahim
Problem name: Palindromic Number
Problem link: https://atcoder.jp/contests/abc070/tasks/abc070_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	int first_d = 0, last_d = 0;
	cin >> N;
	first_d = N / 100;
	last_d = N % 10;
	if (first_d == last_d)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
