#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        cout << (s[i] == '0' ? '1' : '0');
    cout << endl;
}