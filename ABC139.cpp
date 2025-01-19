#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
    string s, t;
    cin >> s >> t;
    int sum = 0;
    rep(i, 3)
    {
        if (s.at(i) == t.at(i)) sum++;
    }
    cout << sum << endl;
}