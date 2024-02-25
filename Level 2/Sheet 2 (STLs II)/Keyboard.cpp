/*
Author: Karim Tarek Ibrahim
Problem name: Keyboard
Problem link: https://codeforces.com/problemset/problem/474/A
Date: 25/2/2024
*/

#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}        

int main()
{
    fastIO();
    char ch;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./", str;
    cin >> ch >> str;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (str[i] == s[j])
            {
                if (ch == 'R')
                    cout << s[j - 1];
                else
                    cout << s[j + 1];
            }
        }
    }
    
    return 0;
}
