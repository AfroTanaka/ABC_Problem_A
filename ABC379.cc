#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    cout << b << c << a << " " << c << a << b << endl;
}