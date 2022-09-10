#include <bits/stdc++.h>

using namespace std;

void solution(int *scores, int *queries)
{
    unordered_map<int, int> tot = {};

    int scoresSize = sizeof(scores) / sizeof(scores[0]);
    int queriesSize = sizeof(queries) / sizeof(queries[0]);

    for (int j = 0; j <= scoresSize; j++)
    {
        tot[j] = tot[j - 1] + scores[j];
    }

    for (int j = 0; j < queriesSize; j++)
        cout << tot[queries[j] - 1] << endl;
}

int main()
{
    int t, q;
    int scores[100];
    int queries[int(1e5 + 10)];
    cin >> t;

    for (int i = 0; i < t; i++)
        cin >> scores[i];
    cin >> q;
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    // for (int i = 0; i < q; i++)
    //     cout << queries[i] << " : ";
    // cout << "\n\n\n\n\n\n";
    solution(scores, queries);

    return 0;
}