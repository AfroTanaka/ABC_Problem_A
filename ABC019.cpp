#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> three(3);
    rep(i, 3)
        cin >> three.at(i);
    sort(three.begin(), three.end());
    cout << three.at(1) << endl;
}