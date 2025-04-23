#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int r_indx = 0;
    int m_indx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            r_indx = i;
        if (s[i] == 'M')
            m_indx = i;
    }
    cout << (r_indx < m_indx ? "Yes" : "No") << endl;
}