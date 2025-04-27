#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> s;
        if (s.size() == i + 1)
            sum++;
    }
    cout << sum << endl;
}