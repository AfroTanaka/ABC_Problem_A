#include <bits/stdc++.h>
using namespace std;

int main()
{
    char b;
    cin >> b;
    unordered_map<char, char> complement = {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}
    };
    cout << complement[b] << endl;
}