/*
Author: Karim Tarek Ibrahim
Problem name: Left Rotation
Problem link: https://www.hackerrank.com/challenges/array-left-rotation/problem
Date: 14/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

deque<int> rotateLeft(int d, deque<int> arr) 
{
	while (d--)
	{
		arr.push_back(arr.front());
		arr.pop_front();
	}
	return arr;
}

int main()
{
	int n, d, tmp;
	cin >> n >> d;
	tmp = n;
	deque<int> dq, ans;

	while (tmp--)
	{
		int x;
		cin >> x;
		dq.push_back(x);
	}

	ans = rotateLeft(d, dq);

	for (int x : ans)
		cout << x << " ";

	return 0;
}
