#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s = s.substr(s.size() - 2, s.size());
    cout << (s == "er" ? "er" : "ist") << endl;
}