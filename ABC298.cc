#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int good_sum = 0;
    int fail_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            good_sum++;
        if (s[i] == 'x')
            fail_sum++;
    }
    cout << (good_sum >= 1 && !fail_sum ? "Yes" : "No");
}