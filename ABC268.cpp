#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    set<int> list;
    list.insert(a);
    list.insert(b);
    list.insert(c);
    list.insert(d);
    list.insert(e);
    cout << list.size() << endl;
}