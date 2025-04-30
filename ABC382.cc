#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    string s;
    cin >> n >> d >> s;
    int empty = 0;
    int cookies = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '@')
            cookies++;
        else
            empty++;
    }
    cout << (cookies >= d ? d + empty : cookies + empty) << endl;
}