#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        int p, q;
        cin >> p >> q;
        sum += p * q / 10;
    }
    cout << sum << endl;
}