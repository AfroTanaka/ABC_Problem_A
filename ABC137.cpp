#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(max(a + b, a - b) , a * b) << endl;
}