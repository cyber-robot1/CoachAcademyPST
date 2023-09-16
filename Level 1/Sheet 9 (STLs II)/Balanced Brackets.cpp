/*
Author: Karim Tarek Ibrahim
Problem name: Balanced Brackets
Problem link: https://www.hackerrank.com/challenges/balanced-brackets/problem
Date: 16/9/2023
*/

#include <bits/stdc++.h>
using namespace std;

string isBalanced(string str) 
{
    stack<char> s;
    string yes = "YES", no = "NO";
    bool flag = false;
    if (str.size() % 2 == 0)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '{' || str[i] == '[' || str[i] == '(')
                s.push(str[i]);

            else
            {
                if (str[i] == '}')
                {
                    if (s.empty())
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        if (s.top() == '{')
                        {
                            flag = true;
                            s.pop();
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }

                else if (str[i] == ']')
                {
                    if (s.empty())
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        if (s.top() == '[')
                        {
                            flag = true;
                            s.pop();
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }

                else if (str[i] == ')')
                {
                    if (s.empty())
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        if (s.top() == '(')
                        {
                            flag = true;
                            s.pop();
                        }
                        else
                        {
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }

        if (flag && s.empty())
            return yes;
        else
            return no;
    }
    else
        return no;
}

int main()
{
    int n;
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        cout << isBalanced(str) << endl;
    }

    return 0;
}
