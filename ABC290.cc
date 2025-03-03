#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> score_distribution(n);
    vector<int> scores(m);
    for (int i = 0; i < n; i++)
        cin >> score_distribution[i];
    for (int i = 0; i < m; i++)
        cin >> scores[i];
    int sum = 0;
    for (int i = 0; i < m; i++)
        sum += score_distribution[scores[i] - 1];
    cout << sum << endl;
}