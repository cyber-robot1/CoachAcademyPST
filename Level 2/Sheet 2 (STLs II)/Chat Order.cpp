/*
Author: Karim Tarek Ibrahim
Problem name: Chat Order
Problem link: https://codeforces.com/problemset/problem/637/B
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
    stack<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.push(v[i]);
    }
    map<string, int> mp;
    while (!s.empty())
    {
        mp[s.top()]++;
        if (mp[s.top()] == 1)
            cout << s.top() << endl;
        s.pop();
    }
  
    return 0;
}
