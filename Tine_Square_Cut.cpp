// #include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main()
{
    int t, i = 0, x[int(1e5 + 10)], y[int(1e5 + 10)];
    int max = 0;
    cin >> t;
    i = t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        x[a]++;
        y[b]++;

        int temp = (2 - x[a]) + (2 - y[b]);
        if (temp > max)
        {
            max += 1;
        }
        if (x[a] == 2 && y[b] == 2)
        {
            max = 0;
            break;
        }
    }
    cout << max;

    return 0;
}