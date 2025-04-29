#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int one = 0;
    int two = 0;
    int three = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '1')
            one++;
        else if (n[i] == '2')
            two++;
        else if (n[i] == '3')
            three++;
    }
    cout << (one == 1 && two == 2 && three == 3 ? "Yes" : "No") << endl;
}