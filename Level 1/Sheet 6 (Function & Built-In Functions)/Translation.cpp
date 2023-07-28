/*
Author: Karim Tarek Ibrahim
Problem name: Translation
Problem link: https://codeforces.com/problemset/problem/41/A
Date: 28/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	
	string s, t;
	cin >> s >> t;
	reverse(t.begin(), t.end());
	if (s == t)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
