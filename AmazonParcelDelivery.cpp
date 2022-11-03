#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(vector<int> parcels, int k)
{
    int ans = 0;
    int count = k - parcels.size();
    unordered_map<long, long> hsh;
    for (size_t i = 0; i < count; i++)
    {
        hsh[parcels[i]]++;
    }
    for (size_t i = 1; i <= k; i++)
    {
        if (count == 0)
        {
            break;
        }
        if (hsh[i] == 0)
        {
            ans += i;
            count -= 1;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> processes;

    for (size_t i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        processes.push_back(p);
    }
    cin >> m;
    int v = getMinimumCost(processes, m);
    cout << v;
    return 0;
}