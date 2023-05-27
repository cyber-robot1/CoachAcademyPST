/*
Author: Karim Tarek Ibrahim
Problem name: UOIAUAI
Problem link: https://atcoder.jp/contests/abc049/tasks/abc049_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c == 'a' || c == 'o' || c == 'e' || c == 'i' || c == 'u')
		cout << "vowel" << endl;
	else
		cout << "consonant" << endl;

	return 0;
}
