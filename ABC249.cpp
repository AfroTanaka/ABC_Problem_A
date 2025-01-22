#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int a_distance, b_distance;
    a_distance = (x / (a + c)) * (a * b) + (min(a, (x % (a + c))) * b);
    b_distance = (x / (d + f)) * (d * e) + (min(d, (x % (d + f))) * e);
    if (a_distance == b_distance)
        cout << "Draw" << endl;
    else if (a_distance > b_distance)
        cout << "Takahashi" << endl;
    else
        cout << "Aoki" << endl;
}