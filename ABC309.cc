#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a % 3 && a + 1 == b ? "Yes" : "No") << endl;
}