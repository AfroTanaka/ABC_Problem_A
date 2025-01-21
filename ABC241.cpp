#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> list(10);
    for (int i = 0; i < 10; i++)
        cin >> list.at(i);
    int display = 0;
    for (int i = 0; i < 3; i++)
        display = list.at(display);
    cout << display << endl;
}