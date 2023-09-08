/*
Author: Karim Tarek Ibrahim
Problem name: Launch of Collider
Problem link: https://codeforces.com/problemset/problem/699/A
Date: 19/4/2023
*/

#include <iostream>
using namespace std;
 
int MininArray(int n, int arr[])
{
    int mn = 0;
    mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= mn)
            mn = arr[i];
    }
    return mn;
}
 
int arr[200001], moment[100001];
char direction[200001];
int main()
{
    int n;
    int res = 0, output = 0, size = 0;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> direction[i];
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0, j = 0; i < n; i++)
    {
        if (direction[i] == 'R')
        {
            if (direction[i + 1] == 'L')
            {
                res = (arr[i + 1] - arr[i]) / 2;
                moment[j] = res;
                j++;
                size++;
                flag = true;
            }
        }
    }
 
    output = MininArray(size, moment);
    
    if (flag)
        cout << output;
    else
        cout << -1;
    
 
    return 0;
}
