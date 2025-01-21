#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x_coordinate(3);
    vector<int> y_coordinate(3);

    for (int i = 0; i < 3; i++)
        cin >> x_coordinate.at(i) >> y_coordinate.at(i);
    int res_x, res_y;
    res_x = x_coordinate.at(0) ^ x_coordinate.at(1) ^ x_coordinate.at(2);
    res_y = y_coordinate.at(0) ^ y_coordinate.at(1) ^ y_coordinate.at(2);
    cout << res_x << " " << res_y << endl;
}