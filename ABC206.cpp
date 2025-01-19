#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tmp = 1.08 * n;
    if (tmp < 206)
        cout << "Yay!" << endl;
    else if (tmp == 206)
        cout << "so-so" << endl;
    else
        cout << ":(" << endl;
}