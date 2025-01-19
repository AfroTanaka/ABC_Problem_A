#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cout << (N % 10 == 9 || N / 10 == 9 ? "Yes" : "No") << endl;
}