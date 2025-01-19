#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.at(0) == s.at(1) && s.at(1) == s.at(2))
        cout << 1 << endl;
    else if (s.at(0) != s.at(1) && s.at(1) != s.at(2) && s.at(2) != s.at(0))
        cout << 6 << endl;
    else
        cout << 3 << endl;
}