/*
Author: Karim Tarek Ibrahim
Problem name: box
Problem link: https://atcoder.jp/contests/abc180/tasks/abc180_a
Date: 4/5/2023
*/

#include <iostream>
using namespace std;

int main()
{

	int N, A, B;
	cin >> N >> A >> B;
	N -= A;
	N += B;
	cout << N << endl;

	return 0;
}
