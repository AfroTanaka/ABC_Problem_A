#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int sum_x = 0;
    int sum_y = 0;
    for (int i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
    }
    cout << (sum_x >= sum_y ? (sum_x > sum_y ? "Takahashi" : "Draw") : "Aoki") << endl;
}