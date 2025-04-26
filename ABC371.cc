#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, u;
    cin >> s >> t >> u;
    // if (s != t)
    //     cout << "A" << endl;
    // else if (s == u)
    //     cout << "B" << endl;
    // else
    //     cout << "C" << endl;
    if (s == u)
        cout << "B" << endl;
    else if (s != t)
        cout << "A" << endl;
    else
        cout << "C" << endl;
}