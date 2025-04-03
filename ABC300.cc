#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> seq(n);
    for (int i = 0; i < n; i++)
        cin >> seq[i];
    int sum = a + b;
    for (int i = 0; i < n; i++)
    {
        if (seq[i] == sum)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}