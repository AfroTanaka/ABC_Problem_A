#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "A";
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
        s += s.at(0) + i;
    cout << s << endl;
}