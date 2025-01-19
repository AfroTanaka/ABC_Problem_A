#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X, Y;
    cin >> X >> Y;
    if (X == Y)
        cout << "=" << endl;
    else
        cout << (X > Y ? ">" : "<") << endl;
}