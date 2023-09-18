/*
Author: Karim Tarek Ibrahim
Problem name: Easy Stack
Problem link: https://www.spoj.com/problems/STACKEZ/
Date: 16/9/2023
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	stack<int> s;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			int x;
			cin >> x;
			s.push(x);
		}
		else if (n == 2)
		{
			if (!s.empty())
				s.pop();
		}
		else
		{
			if (s.empty())
				cout << "Empty!" << "\n";
			else
				cout << s.top() << "\n";
		}
	}

	return 0;
}
