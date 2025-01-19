#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    if(3 * w == 4 * h)
        cout << "4:3" << endl;
    else
        cout << "16:9" << endl;
}