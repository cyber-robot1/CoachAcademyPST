/*
Author: Karim Tarek Ibrahim
Problem name: Simple Text Editor
Problem link: https://www.hackerrank.com/challenges/simple-text-editor/problem
Date: 18/9/2023
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
	
	int Q;
	cin >> Q;
	string str, tmp;
	stack<string> s;
	while (Q--)
	{
		int N;
		cin >> N;
		
		// append
		if (N == 1)
		{
			cin >> tmp;
			if (str.empty())
			{
				str = str + tmp;
				s.push(str);
			}
			else
			{
				str = str + tmp;
				s.push(str);
			}
		}
		
		// delete
		else if (N == 2)
		{
			int x;
			cin >> x;
			while (x--)
				str.pop_back();
			s.push(str);
		}
		
		// print
		else if (N == 3)
		{
			int x;
			cin >> x;
			x--;
			cout << str[x] << endl;
		}

		// undo
		else if (N == 4)
		{
			s.pop();
			if (s.empty())
				str = "";
			else
				str = s.top();
		}
	}
	

	return 0;
}
