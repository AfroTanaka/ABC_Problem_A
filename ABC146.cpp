#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> day_to_count = {
        {"SUN", 7},
        {"MON", 6},
        {"TUE", 5},
        {"WED", 4},
        {"THU", 3},
        {"FRI", 2},
        {"SAT", 1}
    };
    string s;
    cin >> s;
    cout << day_to_count[s] << endl;
}