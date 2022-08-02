#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len = 0;
    cin >> len;
    string op = "";

    for (int i = 0; i < len; i++)
    {
        int n = 0;
        cin >> n;

        op = to_string(n) + " " + op;
    }
    cout << op;
    return 0;
}