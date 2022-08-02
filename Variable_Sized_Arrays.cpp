#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Code Here
    long long a, b;
    cin >> a >> b;
    long long cArr[a];
    long long arr[a][b];
    long long arr2[a][b];

    for (long long i = 0; i < a; i++)
    {
        long long count = 0;
        cin >> count;
        cArr[i] = count;
        for (long long j = 0; j < count; j++)
        {
            long long n;
            cin >> n;
            arr[i][j] = n;
        }
    }

    for (long long i = 0; i < a; i++)
    {
        long long temp = 0;
        cin >> temp;
        arr2[i][0] = temp;

        cin >> temp;
        arr2[i][1] = temp;

        cout << arr[arr2[i][0]][arr2[i][1]] << endl;
    }

    return 0;
}