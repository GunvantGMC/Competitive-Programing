#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int x = 10;
    // int &y = x;
    // y = 5;
    // cout << x;
    // return 0;
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            sum += *(a + 1);
        else
            sum -= *(a + 1);
    }
    cout << sum;
}