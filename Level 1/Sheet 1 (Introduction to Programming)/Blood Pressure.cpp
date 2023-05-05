/*
Author: Karim Tarek Ibrahim
Problem name: Blood Pressure
Problem link: https://atcoder.jp/contests/abc211/tasks/abc211_a
Date: 4/5/2023
*/

#include <iostream>
using namespace std;

int main()
{

	int A, B;
	double C;
	cin >> A >> B;
	C = ((double)A - (double)B) / 3 + B;  // Type Casting
	cout << C << endl;

	return 0;
}
