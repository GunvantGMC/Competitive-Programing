#include <bits/stdc++.h>

using namespace std;

int findNextEven(int n)
{
    if (n % 2 == 0)
        return n + 2;
    return n + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << findNextEven(n);
    return 0;
}
