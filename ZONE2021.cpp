#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string target = "ZONe";
    cin >> s;
    size_t pos = 0;
    int count = 0;
    while ((pos = s.find(target, pos)) != string::npos)
    {
        count++;
        pos += target.length();
    }
    cout << count << endl;
}