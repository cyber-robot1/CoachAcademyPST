/*
Author: Karim Tarek Ibrahim
Problem name: Tanya and Stairways
Problem link: https://codeforces.com/problemset/problem/1005/A
Date: 8/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
 
	int stairways = 0, Steps = 0;
	deque<int> d, steps;
	int n, x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		d.push_back(x);
	}
	
	while (!(d.empty()))
	{
		for (int i = 1, j = 0; j < d.size(); i++, j++)
		{
			if (i == d[j])
			{
				Steps++;
				continue;
			}
			else
			{
				stairways++;
				break;
			}
		}
 
		steps.push_back(Steps);
		while (Steps--)
			d.pop_front();
		Steps = 0;
	}
	stairways++;
	
	cout << stairways << endl;
	for (int value : steps)
		cout << value << " ";
 
	return 0;
}
