#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.find("|");
    int y = s.rfind("|");
    cout << s.substr(0, x) + s.substr(y + 1) << endl;
}