#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
        s[i] = '-';
    if (n % 2)
        s[n / 2] = '=';
    else
    {
        s[n / 2] = '=';
        s[n / 2 - 1] = '=';
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << endl;
}