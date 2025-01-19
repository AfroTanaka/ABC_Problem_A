#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> num_sequence(3);
    cin >> num_sequence.at(0) >> num_sequence.at(1) >> num_sequence.at(2);
    sort(num_sequence.begin(), num_sequence.end());
    cout << (num_sequence.at(2) - num_sequence.at(1) == num_sequence.at(1) - num_sequence.at(0) ? "Yes" : "No") << endl;
}