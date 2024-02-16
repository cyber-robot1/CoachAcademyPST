/*
Author: Karim Tarek Ibrahim
Problem name: Array
Problem link: https://codeforces.com/problemset/problem/300/A
Date: 16/2/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void PUSH(deque<int>& deq1, deque<int>& deq2)
{
    deq2.push_back(deq1.back());
    deq1.pop_back();
}
 
int main()
{
    fastIO();
    int n, t1 = 2, t2 = 2, t3 = 2, t4 = 2;
    cin >> n;
    deque<int> deq(n), pos, neg, zero;
    for (int i = 0; i < n; i++)
        cin >> deq[i];
    sort(deq.begin(), deq.end());
    
    int P = 0, N = 0;
    for (auto it : deq)
    {
        if (it > 0)
            P++;
        else if (it < 0)
            N++;
    }
    if (P > 0)
    {
        while (!deq.empty())
        {
            if (deq.back() > 0)
                PUSH(deq, pos);
            else
                break;
        }
        if (N % 2 != 0)
        {
            PUSH(deq, zero);
            while (!deq.empty())
                PUSH(deq, neg);
        }
        else
        {
            while (t1--)
                PUSH(deq, zero);
            while (!deq.empty())
                PUSH(deq, neg);
        }
    }
    else
    {
        if (N % 2 != 0)
        {
            PUSH(deq, zero);
            while (t2--)
                PUSH(deq, pos);
            while (!deq.empty())
                PUSH(deq, neg);
        }
        else
        {
            while (t3--)
                PUSH(deq, zero);
            while (t4--)
                PUSH(deq, pos);
            while (!deq.empty())
                PUSH(deq, neg);
        }
    }
    
    cout << neg.size() << " ";
    for (auto it : neg)
        cout << it << " ";
    cout << endl;
    cout << pos.size() << " ";
    for (auto it : pos)
        cout << it << " ";
    cout << endl;
    cout << zero.size() << " ";
    for (auto it : zero)
        cout << it << " ";
 
    return 0;
}
