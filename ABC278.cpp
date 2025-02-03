#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    deque<int> sequence(n);
    for (int i = 0; i < n; i++)
        cin >> sequence.at(i);
    for (int i = 0; i < k; i++)
    {
        sequence.pop_front();
        sequence.push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        cout << sequence.at(i) << " ";
    }
    cout << endl;
}