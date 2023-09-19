/*
Author: Karim Tarek Ibrahim
Problem name: Little Elephant and Bits
Problem link: https://codeforces.com/problemset/problem/258/A
Date: 20/9/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	bool flag = false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			s.erase(i, 1);
			flag = true;
			break;
		}
	}
	
	if (!flag)
		s.erase(0, 1);
	cout << s;
	
	return 0;
}
