#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s, t;
    cin >> s >> t;
    cout << (s == 'Y' ? (char)(toupper(t)) : (char)(t)) << endl;
}