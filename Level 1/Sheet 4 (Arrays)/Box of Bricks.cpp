/*
Author: Karim Tarek Ibrahim
Problem name: Box of Bricks
Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=532
Date: 18/7/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[51];
int main()
{
	int n, set = 0;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;

		else
		{
			set++;
			int sum = 0, k = 0, mov = 0;
			for (int i = 0; i < n; i++)
				cin >> arr[i];

			for (int i = 0; i < n; i++)
				sum += arr[i];

			k = sum / n;

			sort(arr, arr + n);
			reverse(arr, arr + n);

			for (int i = 0; i < n; i++)
			{
				if (arr[i] > k)
					mov += (arr[i] - k);
			}

			cout << "Set #" << set << endl;
			cout << "The minimum number of moves is " << mov << "." << endl;
			cout << endl;
		}
	}

	return 0;
}
