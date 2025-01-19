#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> s = {a, b, c};
    vector<int> t = {a, b, c};
    sort(s.begin(), s.end());
    rep(i, 3)
    {
        int cnt = 0;
        rep(j, 3)
        {
            if (t.at(i) <= s.at(j))
                cnt++;
        }
        cout << cnt << endl;
    }
}