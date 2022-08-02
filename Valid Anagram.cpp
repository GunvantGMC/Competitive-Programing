#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<int, int> hsh = {};

        if (s.length() != t.length())
            return false;

        for (int i = 0; i < s.length(); i++)
            hsh[s[i]]++;

        for (int j = 0; j < t.length(); j++)
        {
            if (hsh[t[j]] == 0)
                return false;
            else
                hsh[t[j]]--;
        }

        return true;
    }
};

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Solution s;
    if (s.isAnagram(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}