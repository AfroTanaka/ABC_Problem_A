#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(9);
    vector<int> b(8);
    for (int i = 0; i < 9; i++)
        cin >> a[i];
    for (int i = 0; i < 8; i++)
        cin >> b[i];
    int t_sum = 0;
    int a_sum = 0;
    for (int i = 0; i < 9; i++)
        t_sum += a[i];
    for (int i = 0; i < 8; i++)
        a_sum += b[i];
    cout << t_sum - a_sum + 1 << endl;
}