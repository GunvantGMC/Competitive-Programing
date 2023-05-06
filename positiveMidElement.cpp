#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int arr[n];
    int tarr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j : arr)
    {
        if (j > 0)
            tarr[k++] = j;
    }
    cout << tarr[abs((k - 1) / 2)];

    return 0;
}
