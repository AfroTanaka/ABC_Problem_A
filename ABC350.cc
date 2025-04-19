#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int contest_no = 0;
    cin >> s;
    contest_no += (s[3] - '0') * 100;
    contest_no += (s[4] - '0') * 10;
    contest_no += (s[5] - '0');
    cout << (contest_no != 316 && (1 <= contest_no && contest_no <= 349) ? "Yes" : "No") << endl;
}