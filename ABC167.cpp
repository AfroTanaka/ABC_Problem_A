#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if (s == t.substr(0, t.size() - 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}