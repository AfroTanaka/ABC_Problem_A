#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if (s == "sick" && t == "sick")
        cout << 1 << endl;
    else if (s == "fine" && t == "fine")
        cout << 4 << endl;
    else if (s == "sick" && t == "fine")
        cout << 2 << endl;
    else
        cout << 3 << endl;
}