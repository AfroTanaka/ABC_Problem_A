#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> haiku(3);
    cin >> haiku.at(0) >> haiku.at(1) >> haiku.at(2);
    sort(haiku.begin(), haiku.end());
    if (haiku.at(0) == 5 && haiku.at(1) == 5 && haiku.at(2) == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}