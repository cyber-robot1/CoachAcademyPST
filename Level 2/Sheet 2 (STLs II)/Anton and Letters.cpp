/*
Author: Karim Tarek Ibrahim
Problem name: Anton and Letters
Problem link: https://codeforces.com/problemset/problem/443/A
Date: 22/7/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int freq[500];
int main()
{
	
	string s;
	int c = 0;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			freq[s[i]]++;
	}
	
	for (int i = 97; i <= 122; i++)
	{
		if (freq[i] >= 1)
			c++;
	}
 
	cout << c;
 
	return 0;
}

