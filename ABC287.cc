#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> votes(n);
    for (int i = 0; i < n; i++)
        cin >> votes[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (votes[i] == "For")
            sum++;
    }
    cout << (sum > votes.size() / 2 ? "Yes" : "No");
}