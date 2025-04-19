#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout << (min(x, y) <= z && z <= max(x, y) ? "Yes" : "No") << endl;
}