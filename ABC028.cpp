#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 100)
        cout << "Perfect" << endl;
    else if (n >= 90)
        cout << "Great" << endl;
    else if (n >= 60)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
}