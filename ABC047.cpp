#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> bag(3);
    cin >> bag.at(0) >> bag.at(1) >> bag.at(2);
    sort(bag.begin(), bag.end());
    if (bag.at(0) + bag.at(1) == bag.at(2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}