#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (b % a == 0 ? a + b : b - a) << endl;
}