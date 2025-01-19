#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    int largest = (b / k) * k;
    if (largest >= a)
        cout << "OK" << endl;
    else
        cout << "NG" << endl;
}