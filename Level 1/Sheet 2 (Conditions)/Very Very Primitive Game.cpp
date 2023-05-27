/*
Author: Karim Tarek Ibrahim
Problem name: Very Very Primitive Game
Problem link: https://atcoder.jp/contests/abc190/tasks/abc190_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A > B)
		cout << "Takahashi" << endl;
	else if (B > A)
		cout << "Aoki" << endl;
	else if (A == B)
	{
		if (C == 1)
			cout << "Takahashi" << endl;
		else
			cout << "Aoki" << endl;
	}

	return 0;
}
