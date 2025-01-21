#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a, b;
    cin >> s >> a >> b;
    s.at(a - 1) ^= s.at(b - 1);
    s.at(b - 1) ^= s.at(a - 1);
    s.at(a - 1) ^= s.at(b - 1);
    cout << s << endl;
}