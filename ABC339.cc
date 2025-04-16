#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int dot_indx;
    //int start = s.size() - 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '.')
        {
            dot_indx = i + 1;
            break;
        }
    }
    for (int i = dot_indx; i < s.size(); i++)
        cout << s[i];
    cout << endl;
}