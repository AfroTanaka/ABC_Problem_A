#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin >> n;
    cout << string_view(s).substr(0, n) << endl;;
}