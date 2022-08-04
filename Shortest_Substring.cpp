#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, int> hsh = {};
    string str;
    cin >> str;
    int count = 0;

    for (auto c : str)
    {
        if (hsh[c] == 0)
            hsh[c]++;

        else
            count++;
    }

    cout << count << endl;

    return 0;
}