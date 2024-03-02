/*
Author: Karim Tarek Ibrahim
Problem name: Berpizza
Problem link: https://codeforces.com/contest/1468/problem/C
Date: 2/3/2024
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
    map<int, deque<int>, greater<>> mp;          //polycarp container
    deque<int> d;                               // monocarp container
    set<int> s;                                // served container
    int T; cin >> T;
    int customer = 0;
    while (T--)
    {
        int Q; cin >> Q;
        if (Q == 1)
        {
            customer++; 
            int m; cin >> m; 
            mp[m].push_back(customer); 
            d.push_back(customer);
        }
 
        else if (Q == 2)
        {
            while (s.find(d.front()) != s.end())
                d.pop_front();
            cout << d.front() << " ";
            s.insert(d.front());
            d.pop_front();
        }
 
        else
        {
            while (s.find(mp.begin()->second.front()) != s.end())
            {
                mp.begin()->second.pop_front();
                if (mp.begin()->second.empty())
                    mp.erase(mp.begin());
            }
            cout << mp.begin()->second.front() << " ";
            s.insert(mp.begin()->second.front());
            mp.begin()->second.pop_front();
            if (mp.begin()->second.empty())
                mp.erase(mp.begin());
        }
    }
    
    return 0;
}
