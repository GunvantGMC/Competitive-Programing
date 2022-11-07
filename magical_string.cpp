#include <bits/stdc++.h>

using namespace std;

int magic(int k, string s)
{
    int count = 0;
    for (int i = 0; i < k; i += 2)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    return count;
}

int main()
{
    string s;
    int k;
    cin >> k;
    cin >> s;
    cout << magic(k, s);
    return 0;
}