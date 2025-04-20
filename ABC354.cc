#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h;
    cin >> h;
    long long i = 0;
    while ((long long)(pow(2, i) - 1) <= h)
        i++;
    cout << i << endl;
}