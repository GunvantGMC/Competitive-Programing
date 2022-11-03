#include <bits/stdc++.h>

using namespace std;

int callMethod(int n)
{
    int i = 1;
    while (i < n)
    {
        if (pow(2, i) > n)
            break;
        i++;
    }
    return (pow(2, i - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << callMethod(n) << endl;
    return 0;
}