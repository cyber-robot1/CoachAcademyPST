/*
Author: Karim Tarek Ibrahim
Problem name: Boy or Girl
Problem link: https://codeforces.com/problemset/problem/236/A
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
    cin >> str;
    set<char> s;
    for (int i = 0; i < str.size(); i++)
        s.insert(str[i]);

    if (s.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
