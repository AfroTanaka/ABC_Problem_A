#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> list(3);
    cin >> list.at(0) >> list.at(1) >> list.at(2);
    sort(list.rbegin(), list.rend());
    cout << (list.at(0) * 10 + list.at(1)) + list.at(2) << endl;
}