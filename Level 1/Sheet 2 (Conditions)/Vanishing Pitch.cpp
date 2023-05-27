/*
Author: Karim Tarek Ibrahim
Problem name: Vanishing Pitch
Problem link: https://atcoder.jp/contests/abc191/tasks/abc191_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	int V, T, S, D;
	double t;
	cin >> V >> T >> S >> D;
	t = (double)D / (double)V;
  
	if (t >= T && t <= S)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	return 0;
}
