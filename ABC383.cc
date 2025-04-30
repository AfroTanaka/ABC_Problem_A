#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> hum(n);
    for (int i = 0; i < n; i++)
        cin >> hum[i].first >> hum[i].second;
    int current = 0;
    for (int i = 0; i < n - 1; i++)
    {
        current += hum[i].second;
        int tmp = (hum[i + 1].first - hum[i].first);
        if (current - tmp < 0)
            current = 0;
        else
            current -= tmp;
    }
    current += hum[n - 1].second;
    cout << current << endl;
}