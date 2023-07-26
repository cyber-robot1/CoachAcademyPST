/*
Author: Karim Tarek Ibrahim
Problem name: Palindrome with leading zeros
Problem link: https://atcoder.jp/contests/abc198/tasks/abc198_b
Date: 26/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// function to calculate No. of 0's at the tail of the given string 
int NumOfZeros(string s)
{
	int c = 0;
	reverse(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			c++;
	}
	return c;
}

// function to check if the given string is palindrome or not
bool isPalindromeString(string s)
{
	string z;
	z = s;
	bool flag = true;
	reverse(z.begin(), z.end());
	if (z == s)
		flag = true;
	else
		flag = false;

	return flag;
}

int main()
{
	
	string str;
	cin >> str;
	
	if (str[str.size() - 1] == '0')
	{
		int numZeros = 0;
		string zeros = "";

		numZeros = NumOfZeros(str);

		for (int i = 0; i < numZeros; i++)
			zeros.push_back('0');

		str = zeros + str;

		if (isPalindromeString(str))
			cout << "Yes";
		else
			cout << "No";

	}

	else
	{
		if (isPalindromeString(str))
			cout << "Yes";
		else
			cout << "No";
	}

	return 0;
}
