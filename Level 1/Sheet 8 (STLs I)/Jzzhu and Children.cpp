/*
Author: Karim Tarek Ibrahim
Problem name: Jzzhu and Children
Problem link: https://codeforces.com/problemset/problem/450/A
Date: 14/4/2023
*/

#include <iostream>
using namespace std;
 
bool isAllZero(int n, int arr[])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c++;
    }
    if (c == n)          // All elements are zeros
        return true;
    else
        return false;
}
 
/*
   (arrC)=> No. of candies each child at least needs
   (arrS)=> No. of children numbered from 1 to n
*/
int arrC[101], arrS[101];
 
int main()
{
 
    int n, m, last = 0, c = 0;
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
        cin >> arrC[i];
 
    
    for (int i = 0; i < n; i++)
    {
        if (arrC[i] <= m)
            c++;
    }
    
    for (int i = 0, j = 1; i < n; i++, j++)
        arrS[i] = j;
 
    if (c == n)
        last = n;
    else
    {
        int k = 0;
        while (true)
        {
            if (k == n)
            {
                if (isAllZero(n, arrC))
                    break;
                else
                    k = 0;
            }
 
            else
            {
                if (m >= arrC[k])
                    arrC[k] = 0;
                else
                {
                    last = arrS[k];
                    arrC[k] = arrC[k] - m;
                }
                k++;
            }
        }
    }
    
    cout << last;
 
    return 0;
}
