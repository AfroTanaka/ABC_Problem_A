#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    vector<vector<int>> grid(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> grid.at(i).at(j);
    }
    cout << grid.at(R - 1).at(C - 1) << endl;
}