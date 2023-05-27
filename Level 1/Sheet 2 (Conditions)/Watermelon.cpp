/*
Author: Karim Tarek Ibrahim
Problem name: Watermelon
Problem link: https://codeforces.com/problemset/problem/4/A
Date: 13/9/2022
*/

#include <iostream>
using namespace std;
 
 
int main()
{
    int w;
    cin >> w;
    if (w != 1 && w != 2)
    {
        if (w % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
 
    return 0;
}
