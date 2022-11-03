#include <bits/stdc++.h>

using namespace std;

int totalCount(int N)
{
    int count = 0;

    int cntr = 1;

    unordered_map<int, int> inHsh;
    unordered_map<int, int> outHsh;
    unordered_map<int, int> hash;

    while (cntr <= N)
    {
        if (cntr % 2 == 0)
        {
            // int s = cntr / 2;
            // inHsh[cntr] = s;
            // inHsh[s] = cntr;
            // outHsh[cntr] = 3 * cntr + 1;
            hash[cntr]++;
            hash[cntr / 2]++;
        }
        else
        {
            // int s = 3 * cntr + 1;
            // outHsh[cntr] = s;
            hash[cntr]++;
            hash[3 * cntr + 1]++;
        }
        // cout << cntr << "= " << hash[cntr] << endl;
        // cout << cntr << "= " << inHsh[cntr];
        // cout << " # " << outHsh[cntr] << endl;
        cntr++;
    }
    cntr = 1;
    while (cntr <= N)
    {
        cout << cntr << "= " << hash[cntr] << endl;
        if (hash[cntr] != 2)
            count++;
        // if (inHsh[cntr] == 0 || inHsh[cntr] > N)
        //     count++;
        // if (outHsh[cntr] == 0 || outHsh[cntr] > N)
        //     count++;
        cntr++;
    }
    cout << "Count : " << count << " " << cntr << endl;

    return count - 1;
}

int main()
{
    int k;
    cin >> k;
    cout << totalCount(k);
    return 0;
}