#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a % 10 + a / 100 + (a / 10 % 10), b % 10 + b / 100 + (b / 10 % 10)) << endl;
}