/*
Author: Karim Tarek Ibrahim
Problem name: 500 Yen Coins
Problem link: https://atcoder.jp/contests/abc150/tasks/abc150_a
Date: 10/5/2023
*/


#include <iostream>
using namespace std;

int main()
{
	int K, X;
	cin >> K >> X;
	if (K * (500) >= X)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
