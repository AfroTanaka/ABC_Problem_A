#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bridges(n);
    for (int i = 0; i < n; i++)
        cin >> bridges.at(i);
    int max_height = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_height < bridges.at(i))
        {
            max_height = bridges.at(i);
            max = i + 1;
        }
        }
    cout << max << endl;
}