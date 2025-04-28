#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s == "ABC" || s == "ACB" || s == "BAC" || s == "BCA" || s == "CAB" || s == "CBA")
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}