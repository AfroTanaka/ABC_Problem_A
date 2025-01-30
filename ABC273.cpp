#include <bits/stdc++.h>
using namespace std;

int recursive(int k)
{
    if (k == 0)
        return 1;
    else
        return k * recursive(k - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << recursive(n) << endl;
}