#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.at(0) == s.at(1) || s.at(1) == s.at(2) || s.at(2) == s.at(3))
        cout << "Bad" << endl;
    else
        cout << "Good" << endl;
}