#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int current_index;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '|')
        {
            current_index = i;
            break;
        }
    }
    current_index += 1;
    while (s[current_index] != '|')
    {
        if (s[current_index] == '*')
        {
            cout << "in" << endl;
            return 0;
        }
        current_index++;
    }
    cout << "out" << endl;
}