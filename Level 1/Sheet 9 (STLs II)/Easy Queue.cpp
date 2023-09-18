/*
Author: Karim Tarek Ibrahim
Problem name: Easy Queue
Problem link: https://www.spoj.com/problems/QUEUEEZ/
Date: 16/9/2023
*/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	queue<int> q;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (n == 2)
		{
			if (!q.empty())
				q.pop();
		}
		else
		{
			if (q.empty())
				cout << "Empty!" << "\n";
			else
				cout << q.front() << "\n";
		}
	}

	return 0;
}
