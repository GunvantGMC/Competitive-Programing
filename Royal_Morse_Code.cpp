#include <bits/stdc++.h>

using namespace std;

int func(int t)
{
    int count = 0;
    while (t--)
    {
        string str;
        cin >> str;
        int length = str.length(), i = 0;
        int dash = 0, dot = 0;
        unordered_map<int, int> hsh;
        if (str[0] != '.' || str[length - 1] != '-')
            continue;
        while (i < length)
        {
            // if (str[i] == '.')
            //     hsh['.']++;
            // else if (str[i] == '-')
            // {
            //     if (hsh['.'] == 0)
            //         break;
            //     else
            //         hsh['.']--;
            // }
            if (str[i] == '-')
                dash++;
            if (str[i] == '.')
                dot++;
        }
        if (dash == dot)
            count++;
    }
}

int main()
{
    int t;
    cin >> t;
    cout << func(t);
    return 0;
}