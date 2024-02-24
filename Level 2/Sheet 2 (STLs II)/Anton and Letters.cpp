/*
Author: Karim Tarek Ibrahim
Problem name: Anton and Letters
Problem link: https://codeforces.com/problemset/problem/443/A
Date: 24/2/2024
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
    string str;
    getline(cin, str);
    set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        bool isLetter = (str[i] >= 97 && str[i] <= 122);
        if (isLetter)
            s.insert(str[i]);
    }
    cout << s.size();
 
    return 0;
}
