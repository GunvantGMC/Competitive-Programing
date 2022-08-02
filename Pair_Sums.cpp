#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    long long i;
    int q, w;
    cin >> n;
    cin >> k;
    while (n--)
    {

        cin >> q >> w;

        if ((q + w) == k)
        {
            cout << "YES";
            break;
        }
    }
    if (0 > n)
        cout << "NO";

    return 0;
}