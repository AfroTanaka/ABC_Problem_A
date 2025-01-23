#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, R, C;
    cin >> H >> W >> R >> C;
    int sum = 0;
    if (R > 1)
        sum++;
    if (R < H)
        sum++;
    if (C > 1)
        sum++;
    if (C < W)
        sum++;
    cout << sum << endl;
}