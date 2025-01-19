#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, a;
    cin >> h >> a;
    cout << (h % a == 0 ? h / a : h / a + 1) << endl;
}