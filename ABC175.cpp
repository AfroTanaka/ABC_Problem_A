#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.at(0) == 'R' && s.at(1) == 'R' && s.at(2) == 'R')
        cout << 3 << endl;
    else if (s.at(0) == 'R' && s.at(1) == 'R')
        cout << 2 << endl;
    else if (s.at(1) == 'R' && s.at(2) == 'R')
        cout << 2 << endl;
    else if (s.at(0) == 'R' || s.at(1) == 'R' || s.at(2) == 'R')
        cout << 1 << endl;
    else
        cout << 0 << endl;
}