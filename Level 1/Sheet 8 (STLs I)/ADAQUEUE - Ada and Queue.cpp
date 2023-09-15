/*
Author: Karim Tarek Ibrahim
Problem name: ADAQUEUE - Ada and Queue
Problem link: https://www.spoj.com/problems/ADAQUEUE/
Date: 15/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
	deque<int> d;
	string s;
	int Q, N;
	bool isReverse = false;
	cin >> Q;
	while (Q--)
	{
		cin >> s;
		if (s == "reverse")
			isReverse = !isReverse;

		else if (s == "back")
		{
			if (d.empty())
			{
				cout << "No job for Ada?" << endl;
				continue;
			}
			else
			{
				if (isReverse)
				{
					cout << d.front() << endl;
					d.pop_front();
				}
				else
				{
					cout << d.back() << endl;
					d.pop_back();
				}
			}
		}

		else if (s == "front")
		{
			if (d.empty())
			{
				cout << "No job for Ada?" << endl;
				continue;
			}
			else
			{
				if (isReverse)
				{
					cout << d.back() << endl;
					d.pop_back();
				}
				else
				{
					cout << d.front() << endl;
					d.pop_front();
				}
			}
		}

		else if (s == "push_back")
		{
			cin >> N;
			if (isReverse)
				d.push_front(N);
			else
				d.push_back(N);
		}

		else if (s == "toFront")
		{
			cin >> N;
			if (isReverse)
				d.push_back(N);
			else
				d.push_front(N);
		}
	}

	return 0;
}
