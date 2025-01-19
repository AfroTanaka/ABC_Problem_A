#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << ((s1.at(0) == '.' && s2.at(1) == '.') || (s1.at(1) == '.' && s2.at(0) == '.') ? "No" : "Yes") << endl;
}