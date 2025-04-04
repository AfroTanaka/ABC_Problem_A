#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> a[i];
    }
    int min_index = 0;
    int min_value = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min_value > a[i])
        {
            min_value = a[i];
            min_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[(min_index + i) % n] << endl;
    }
}