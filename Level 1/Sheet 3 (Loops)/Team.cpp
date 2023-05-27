/*
Author: Karim Tarek Ibrahim
Problem name: Team
Problem link: https://codeforces.com/problemset/problem/231/A
Date: 12/9/2022
*/

#include <iostream>
using namespace std;
 
int main()
{
    
    int n, P, V, T, flag = 0;
    cin >> n;
    while (n--)
    {
        cin >> P >> V >> T;
        if (P == 1 && V == 1 || V == 1 && T == 1 || P == 1 && T == 1 || P == 1 && V == 1 && T == 1)
            flag++;
    }
    cout << flag;
 
    return 0;
}
