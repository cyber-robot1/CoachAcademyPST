/*
Author: Karim Tarek Ibrahim
Problem name: Sorting Queries
Problem link: https://atcoder.jp/contests/abc217/tasks/abc217_e?lang=en
Date: 28/2/2024
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
    deque<int> d;       // unsorted
    multiset<int> s;   // sorted
    int q; cin >> q;
    while (q--)
    {
        int query; cin >> query;
        if (query == 1)
        {
            int x; cin >> x;
            d.push_back(x);
        }
        else if (query == 2)
        {
            if (!s.empty())
            {
                cout << *(s.begin()) << endl;
                s.erase(s.begin());
            }
            else
            {
                cout << d.front() << endl;
                d.pop_front();
            }
        }
        else if (query == 3)
        {
            copy(d.begin(), d.end(), inserter(s, s.end())); 
            d.clear();
        }
    }
    
    return 0;
}
