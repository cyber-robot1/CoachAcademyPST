/*
Author: Karim Tarek Ibrahim
Problem name: Helpful Maths
Problem link: https://codeforces.com/problemset/problem/339/A
Date: 6/8/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
	
	string s, str;
	cin >> s;
	str = s;
	
	str.erase(remove(str.begin(), str.end(), '+'), str.end());
	sort(str.begin(), str.end());
 
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 != 0)
			str.insert(i, "+");
	}
 
	cout << str;
 
	return 0;
}
