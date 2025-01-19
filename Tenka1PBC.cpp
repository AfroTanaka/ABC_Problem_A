#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string S;
    cin >> S;
    int sum = 0;
    rep(i, S.size())
        sum += S.at(i) - '0';
    cout << sum << endl;
}