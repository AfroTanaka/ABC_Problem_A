#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    cout << (s.at(0) == t.at(2) && s.at(2) == t.at(0) && s.at(1) == t.at(1) ? "YES" : "NO") << endl;
}