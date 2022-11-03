#include <bits/stdc++.h>

using namespace std;

// int minimizeMemory(vector<int> processes, int m)
// {
//     // write from here
//     int sum = 0;
//     int n = processes.size();
//     int hsh[n + 1] = {0};
//     for (size_t i = 1; i <= n; i++)
//     {
//         hsh[i] = hsh[i - 1] + processes[i - 1];
//         sum += processes[i - 1];
//     }
//     int max = 0;
//     for (size_t i = m; i <= n; i++)
//     {
//         if (max < (hsh[i] - hsh[i - m]))
//         {
//             max = hsh[i] - hsh[i - m];
//         }
//     }
//     return sum - max;
// }

int minimizeMemory(vector<int> processes, int m)
{
    // write from here
    int sum = 0, curSum = 0, maxSum;
    int n = processes.size();

    for (size_t i = 0; i < n; i++)
        sum += processes[i];

    for (size_t i = 0; i < m; i++)
        curSum += processes[i];

    maxSum = curSum;

    for (size_t i = m; i < n; i++)
    {
        curSum = processes[i] - processes[i - m];
        maxSum = max(maxSum, curSum);
    }
    return sum - maxSum;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> processes;

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        processes.push_back(p);
    }
    cin >> m;
    int v = minimizeMemory(processes, m);
    cout << v;
    return 0;
}