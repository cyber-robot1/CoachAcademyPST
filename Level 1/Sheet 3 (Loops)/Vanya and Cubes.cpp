/*
Author: Karim Tarek Ibrahim
Problem name: Vanya and Cubes
Problem link: https://codeforces.com/problemset/problem/492/A
Date: 7/2/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
 
    int cubes = 0;          // No. of cubes of each level
    int n;                 // No. of cubes given by the user
    int mx_height = 0;    // Maximum height of the pyramid based on the No. of cubes given by the user
    cin >> n;
    
    int i = 1;
    while (n >= 0)
    {
        cubes = cubes + i;
        if (n >= cubes)
            mx_height++;
        else
            break;
        n = n - cubes;
        i++;
    }
    cout << mx_height;
    
 
    return 0;
}
