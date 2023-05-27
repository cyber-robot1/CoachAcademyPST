/*
Author: Karim Tarek Ibrahim
Problem name: Rainy Season
Problem link: https://atcoder.jp/contests/abc175/tasks/abc175_a
Date: 10/5/2023
*/

#include <iostream>
using namespace std;

char arr[3];
int main()
{
	int c = 0;
	bool flag = true, temp = true;

	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == 'R')
		{
			if (temp)
			{
				c++;
				temp = false;
				flag = true;
			}
			else
			{
				if (flag)
					c++;
				flag = true;
			}
		}

		else if (arr[i] == 'S')
			flag = false;
	}

	cout << c;

	return 0;
}
