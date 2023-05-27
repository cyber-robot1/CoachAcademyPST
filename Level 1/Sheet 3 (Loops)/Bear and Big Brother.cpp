/*
Author: Karim Tarek Ibrahim
Problem name: Bear and Big Brother
Problem link: https://codeforces.com/problemset/problem/791/A
Date: 18/5/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 1;; i++)
	{
		a *= 3;
		b *= 2;
		if (a > b)
		{
			cout << i;
			break;
		}
	}
 
	return 0;
}
