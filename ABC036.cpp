#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b % a)
        cout << b / a + 1 << endl;
    else
        cout << b / a << endl;
}