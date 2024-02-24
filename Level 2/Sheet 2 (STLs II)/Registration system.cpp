/*
Author: Karim Tarek Ibrahim
Problem name: Registration system
Problem link: https://codeforces.com/problemset/problem/4/C
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
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    map<string, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] == 1)
            cout << "OK" << endl;
        else
            cout << v[i] << mp[v[i]] - 1 << endl;
    }

    return 0;
}
