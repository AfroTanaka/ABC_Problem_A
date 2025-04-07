#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'B')
            b++;
        else
            c++;
        if (a && b && c)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}