/*
Author: Karim Tarek Ibrahim
Problem name: Chewbaсca and Number
Problem link: https://codeforces.com/problemset/problem/514/A
Date: 27/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
 
int main()
{
	
	string str;
	cin >> str;
	int var1, var2;
	for (int i = 0; i < str.size(); i++)
	{
		if (i == 0)
		{
			if (str[i] == '9')
				continue;
 
			else if (str[i] == '0')
			{
				var1 = str[i] - '0';
				var1 = var1 + 9;
				str[i] = var1 + '0';
			}
 
			else
			{
				var1 = str[i] - '0';
				var2 = 9 - var1;
				var1 = min(var1, var2);
				str[i] = var1 + '0';
			}
		}
 
		else
		{
			var1 = str[i] - '0';
			var2 = 9 - var1;
			var1 = min(var1, var2);
			str[i] = var1 + '0';
		}
		
	}
	cout << str;
	
 
	return 0;
}
