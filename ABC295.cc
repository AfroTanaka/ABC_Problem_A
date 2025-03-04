#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> sq(n);
    for (int i = 0; i < n; i++)
        cin >> sq[i];
    for (int i = 0; i < n; i++)
    {
        if (sq[i] == "and" || sq[i] == "not" || sq[i] == "that" || sq[i] == "the" || sq[i] == "you")
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}