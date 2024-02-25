/*
Author: Karim Tarek Ibrahim
Problem name: Cancel the Trains
Problem link: https://codeforces.com/problemset/problem/1453/A
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
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        vector<int> N(n), M(m);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
            mp[N[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> M[i];
            mp[M[i]]++;
        }
        int cancelled_trains = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
                cancelled_trains++;
        }
        cout << cancelled_trains << endl;
    }
    
    return 0;
}
