#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b * 2 >= a)
        cout << 0 << endl;
    else
        cout << a - b * 2 << endl;
}