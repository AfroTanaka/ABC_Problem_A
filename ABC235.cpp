#include <bits/stdc++.h>
using namespace std;

int main()
{
    int original, a, b, c;
    cin >> original;
    a = original / 100;
    b = original / 10 % 10;
    c = original % 10;
    cout << 111 * (a + b + c) << endl;
}