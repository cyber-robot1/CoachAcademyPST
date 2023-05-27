/*
Author: Karim Tarek Ibrahim
Problem name: Children and Candies (ABC Edit)
Problem link: https://atcoder.jp/contests/abc043/tasks/abc043_a
Date: 18/5/2023
*/


#include <iostream>
using namespace std;

int main()
{
	int N, sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
		sum += i;
	cout << sum;

	return 0;
}
