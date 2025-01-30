#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
        cin >> sum.at(i);
    cout << accumulate(sum.begin(), sum.end(), 0) << endl;
}