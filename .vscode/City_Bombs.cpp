#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int cityCount = 0;
    unordered_map<int, int> hsh;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        hsh[a] = a + b;

        if (hsh[a + b] == a)
            break;
    }
    if (t == -1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}