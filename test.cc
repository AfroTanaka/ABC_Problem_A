#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int m = 0;
    p[0] = p[0] - 1;
    for (int i = 0; i < n; i++) {
        m = max(m, p[i]);
    }
    cout << m - p[0] << endl;
}