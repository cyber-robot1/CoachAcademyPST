/*
Author: Karim Tarek Ibrahim
Problem name: Array
Problem link: https://codeforces.com/problemset/problem/300/A
Date: 7/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
	deque<int> d;
	int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		d.push_back(x);
	}
	sort(d.begin(), d.end());
 
	int pos = 0, neg = 0;
	
	if (d.back() == 0)
	{
		neg = d.front();     
		d.pop_front();
		int c = 0;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i] < 0)
				c++;
		}
 
		if (c % 2 == 0)
		{
			int x;
			x = d.back();
			d.pop_back();
			cout << 1 << " " << neg << endl;
			cout << d.size() << " ";
			for (int i = 0; i < d.size(); i++)
				cout << d[i] << " ";
			cout << endl;
			cout << 1 << " " << x;
		}
 
		else
		{
			int x, y;
			x = d.back();
			d.pop_back();
			y = d.back();
			d.pop_back();   
			cout << 1 << " " << neg << endl;
			cout << d.size() << " ";
			for (int i = 0; i < d.size(); i++)
				cout << d[i] << " ";
			cout << endl;
			cout << 2 << " " << x << " " << y;
		}
	}
 
	else
	{
		neg = d.front();
		pos = d.back();
		d.pop_front();
		d.pop_back();
		cout << 1 << " " << neg << endl;
		cout << 1 << " " << pos << endl;
		cout << d.size() << " ";
		for (int i = 0; i < d.size(); i++)
			cout << d[i] << " ";
	}
 
	return 0;
}
