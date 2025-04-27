#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string res = s.substr(s.size() - 3);
    cout << (res == "san" ? "Yes" : "No") << endl;
}