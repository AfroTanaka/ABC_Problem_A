#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < 4; i++)
        (s.at(i) == '+' ? sum++ : sum--);
    cout << sum << endl;
}