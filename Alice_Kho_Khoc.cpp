// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, f, count = 0;

    cin >> n;
    cin >> f;
    n--;
    while (n--)
    {
        cin >> k;
        if (f != k)
            count++;
    }
    cout << count;

    return 0;
}