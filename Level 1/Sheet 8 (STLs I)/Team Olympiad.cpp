/*
Author: Karim Tarek Ibrahim
Problem name: Team Olympiad
Problem link: https://codeforces.com/problemset/problem/490/A
Date: 27/2/2023
*/


#include <iostream>
using namespace std;
 
int arr[5001];
int One[5001], Two[5001], Three[5001];
int main()
{
    int n, teams = 0;
    int one = 0, two = 0, three = 0;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
            one++;
        else if (arr[i] == 2)
            two++;
        else if (arr[i] == 3)
            three++;
    }
    
    teams = min(three, min(one, two));
 
    for (int i = 1, a = 1, b = 1, c = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            One[a] = i;
            a++;
        }
        else if (arr[i] == 2)
        {
            Two[b] = i;
            b++;
        }
        else if (arr[i] == 3)
        {
            Three[c] = i;
            c++;
        }
    }
    
    if (teams == 0)
        cout << 0;
    else
    {
        cout << teams << endl;
 
        for (int i = 1; i <= teams; i++)
            cout << One[i] << " " << Two[i] << " " << Three[i] << endl;
    }
 
    return 0;
}
