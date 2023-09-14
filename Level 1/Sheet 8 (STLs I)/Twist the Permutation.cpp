/*
Author: Karim Tarek Ibrahim
Problem name: Twist the Permutation
Problem link: https://codeforces.com/problemset/problem/1650/D
Date: 14/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		deque<int> d(n);
		for (int i = 0; i < n; i++)
		{
			cin >> d[i];
			d[i]--;
		}
		
		deque<int> ans(n);
		for (int i = n-1; i >= 0; i--)
		{
			while (d.back() != i)
			{
				d.push_back(d.front());
				d.pop_front();
				ans[i]++;
			}
			d.pop_back();
		}
		for (int x : ans)
			cout << x << " ";
		cout << endl;
	}
 
	return 0;
}
