#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << static_cast<long long>(pow(a, b) + pow(b, a)) << endl;
}