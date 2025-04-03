#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int t = 0;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t++;
        else
            a++;
    }
    if (t == a)
    {
        cout << (s[n - 1] == 'T' ? 'A' : 'T') << endl;
    }
    else
    {
        cout << (t > a ? 'T' : 'A') << endl;
    }
}