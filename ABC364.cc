#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == "sweet" && s[i + 1] == "sweet" && i + 1 != n - 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}