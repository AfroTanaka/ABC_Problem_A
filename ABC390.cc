#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    int switched = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] > a[i + 1])
            switched++;
    }
    if (a[0] > a[4])
        switched++;
    cout << (switched == 1 ? "Yes" : "No") << endl;
}