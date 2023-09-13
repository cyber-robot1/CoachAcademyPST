/*
Author: Karim Tarek Ibrahim
Problem name: Card Deck
Problem link: https://codeforces.com/problemset/problem/1492/B
Date: 13/9/2023
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
		deque<int> d(n + 1), ans, pos(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> d[i];
			pos[d[i]] = i;
		}
 
		int var = n + 1;
		for (int i = n; i > 0; i--)
		{
			if (pos[i] > var)
				continue;
				
			for (int j = pos[i]; j < var; j++)
				ans.push_back(d[j]);
				
			var = pos[i];
		}
 
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << endl;
	}
 
	return 0;
}
