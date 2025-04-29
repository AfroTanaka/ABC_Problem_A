#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] == 1)
            one++;
        if (a[i] == 2)
            two++;
        if (a[i] == 3)
            three++;
        if (a[i] == 4)
            four++;
    }
    one = one / 2;
    two = two / 2;
    three = three / 2;
    four = four / 2;
    cout << one + two + three + four << endl;
}