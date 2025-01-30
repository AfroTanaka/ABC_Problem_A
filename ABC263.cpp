#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> full_house(5);
    for (int i = 0; i < 5; i++)
        cin >> full_house.at(i);
    sort(full_house.begin(), full_house.end());
    if (full_house.at(0) == full_house.at(1) && full_house.at(1) == full_house.at(2) && full_house.at(3) == full_house.at(4) && full_house.at(2) != full_house.at(3))
        cout << "Yes" << endl;
    else if (full_house.at(0) == full_house.at(1) && full_house.at(1) != full_house.at(2) && full_house.at(2) == full_house.at(3) && full_house.at(3) == full_house.at(4))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}