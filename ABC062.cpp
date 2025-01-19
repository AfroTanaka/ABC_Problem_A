#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> group = {1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
    cout << (group.at(x-1) == group.at(y - 1) ? "Yes" : "No") << endl;
}