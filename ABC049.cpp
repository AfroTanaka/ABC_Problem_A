#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    string vowel = "aeiou";
    cout << (vowel.find(c) != string::npos ? "vowel" : "consonant") << endl;
}