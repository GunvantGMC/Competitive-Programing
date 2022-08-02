#include <bits/stdc++.h>

using namespace std;
const int N = 26;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int hs[26] = {};
        string s;
        cin >> s;
        bool isYes = false;
        for (auto c : s)
        {
            hs[c - 'a']++;
            if (hs[c - 'a'] == 2)
            {

                isYes = true;
                break;
            }
        }
        if (isYes)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

// string s, s1, s2;
// cin >> s;
// int len = s.length();
// if (len == 1)
// {
//     cout << "No" << endl;
// }
// else
// {
//     bool isOdd = len % 2 != 0;

//     s1 = s.substr(0, len / 2);
//     if (isOdd)
//         s2 = s.substr((len / 2) + 1);
//     else
//         s2 = s.substr(len / 2);

//     if (strstr(s1.c_str(), s2.c_str()))
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
// }