#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k, s, t;
    cin >> a >> b >> c >> k >> s >> t;
    int discount = 0;
    if (s + t >= k)
        discount = s * c + t * c;
    int sum = (s * a + t * b) - discount;
    cout << sum << endl;
}