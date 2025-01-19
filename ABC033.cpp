#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    cin >> N;
    cout << (N.at(0) == N.at(1) && N.at(1) == N.at(2) && N.at(2) == N.at(3) ? "SAME" : "DIFFERENT") << endl;
}