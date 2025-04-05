#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum_days = 7 * n;
    vector<int> a(sum_days);
    for (int i = 0; i < sum_days; i++)
    {
        cin >> a[i];
    }
    int weekly_sum = 0;
    for (int i = 0; i < sum_days; i++)
    {
        weekly_sum += a[i];
        if ((i + 1) % 7 == 0)
        {
            cout << weekly_sum << " ";
            weekly_sum = 0;
        }
    }
    cout << endl;
}