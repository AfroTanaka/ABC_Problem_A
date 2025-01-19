#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= x; i++)
        sum += i * 10000;
    cout << sum / x;
}