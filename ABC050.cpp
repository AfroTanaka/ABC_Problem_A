#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    char op;
    cin >> a >> op >> b;
    cout << (op == '+' ? a + b : a - b) << endl;
}