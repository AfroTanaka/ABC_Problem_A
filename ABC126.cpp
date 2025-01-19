#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    s.at(k - 1) = tolower(s.at(k - 1));
    cout << s << endl;
}