#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b > c)
        cout << (b < a || a < c ? "No" : "Yes") << endl;
    else
        cout << (b < a && a < c ? "No" : "Yes") << endl;
}