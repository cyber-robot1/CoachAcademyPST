/*
Author: Karim Tarek Ibrahim
Problem name: Partition
Problem link: https://codeforces.com/problemset/problem/946/A
Date: 19/9/2023
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<int> v, B, C;
	while (n--)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
 
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < 0)
			C.push_back(v[i]);
		else
			B.push_back(v[i]);
	}
 
	int cSum = 0, bSum = 0;
	for (int i = 0; i < B.size(); i++)
		bSum += B[i];
 
	for (int i = 0; i < C.size(); i++)
		cSum += C[i];
	
	cout << bSum - cSum;
	
 
	return 0;
}
