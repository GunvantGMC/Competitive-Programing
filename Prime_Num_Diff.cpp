#include <bits/stdc++.h>

using namespace std;

int calculateSum(int n1, int n2)
{
    int sum = 0, max = 0;
    vector<int> g1;

    while (n1 < n2)
    {
        int k = 2;

        while (k < n1)
        {
            if (n1 % k == 0)
                break;
            k++;
        }

        if (k == n1)
        {
            g1.push_back(k);
            if (k > max)
                max = k;
        }

        n1++;
    }
    if (g1.size() == 1)
        return g1[0];
    for (auto &val : g1)
        sum += max - val;

    return sum;
}

int main()
{
    // Code Here
    int n1, n2;
    cin >> n1 >> n2;
    cout << calculateSum(n1, n2) << endl;
    return 0;
}