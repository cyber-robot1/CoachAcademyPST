/*
Author: Karim Tarek Ibrahim
Problem name: Two Strings
Problem link: https://www.hackerrank.com/contests/101hack19/challenges/two-strings
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
                    
void alpha(vector<char> S, vector<bool> &v)
{
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 97, k = 0; j <= 122; j++, k++)
        {
            char letter = (char)j;
            if (S[i] == letter)
            {
                v[k] = true;
                break;
            }
        }
    }
}

string twoStrings(string str1, string str2) {
    set<char> s1, s2;
    for (int i = 0; i < str1.size(); i++)
        s1.insert(str1[i]);
    for (int i = 0; i < str2.size(); i++)
        s2.insert(str2[i]);
    vector<char> S1(s1.begin(), s1.end()), S2(s2.begin(), s2.end());
    vector<bool> v1(26), v2(26);
    alpha(S1, v1);
    alpha(S2, v2);
    bool result = false;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == 1 && v2[i] == 1)
        {
            result = true;
            break;
        }
    }
    if (result)
        return "YES";
    else
        return "NO";
}
int main()
{
    fastIO();
    int p; cin >> p;
    while (p--)
    {
        string str1, str2; cin >> str1 >> str2;
        cout << twoStrings(str1, str2) << endl;
    }
    
    return 0;
}
