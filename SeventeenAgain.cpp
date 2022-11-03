#include <bits/stdc++.h>

using namespace std;

int loveSeventeen(string str)
{
    int pos = 0;
    int index;
    std::string t = str;
    std::string s = "89";
    std::string::size_type i = t.find(s);
    cout << i << endl;
    while (i != 0)
    {
        i = t.find(s);
        if (i != std::string::npos)
            t.erase(i, s.length());
    }

    cout << t << endl;
    // while ((index = str.find("89", pos)) != string::npos)
    // {
    //     cout << "Match found at position: " << index << endl;
    //     pos = index + 1; // new position is from next element of index
    // }
    return 0;
}

int main()
{
    // Code Here
    string str;
    cin >> str;
    int res = loveSeventeen(str);
    cout << res;
    return 0;
}