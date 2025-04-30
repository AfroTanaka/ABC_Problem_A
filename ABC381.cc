#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int first = n;
    int second = (n + 1) / 2 - 1;
    int third = (n + 1) / 2 - 1;
    int fourth = (n + 1) / 2;
    if (first % 2 && s[third] == '/')
    {
        for (int i = 0; i < second; i++)
        {
            if (s[i] != '1')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        for (int i = fourth; i < first; i++)
        {
            if (s[i] != '2')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}