#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool myCmp(string s, string t)
    {

        if (s.length() == t.length())
        {
            for (int k = 0; k < s.length(); k++)
            {

                if (s[k] != t[k])
                    return false;
            }
            return true;
        }
        else
            return false;
    }

    bool wordPattern(string pattern, string s)
    {

        string st1[3000] = {};
        string fin = "";
        int t = s.length(), k = 0;
        if (myCmp(pattern, s) && s.length() < 1)
            return true;

        string temp = "";
        int hsh[1000] = {-1};

        for (int j = 0; j < 1000; j++)
            hsh[j] = -1;
        int i;

        for (i = 0; i <= s.length(); i++)
        {

            if (s[i] == ' ' || s[i] == '\0')
            {
                st1[k] = temp;

                if (hsh[pattern[k]] == -1)
                    hsh[pattern[k]] = k;

                if (k > 0)
                {

                    if (myCmp(st1[k], st1[k - 1]))
                    {

                        if (!(myCmp(string(1, pattern[k]), string(1, pattern[k - 1]))))
                        {

                            return false;
                        }
                    }
                    if (k - 1 > 0)
                        if (myCmp(st1[k], st1[k - 2]))
                        {

                            if (!(myCmp(string(1, pattern[k]), string(1, pattern[k - 2]))))
                            {

                                return false;
                            }
                        }
                }

                k++;
                temp = "";
            }
            else
                temp += string(1, s[i]);
        }
        // cout << st1["dog"];
        for (int i = 0; i < pattern.length(); i++)
        {
            // cout << "Pat : " << pattern[i];
            // cout << "\t Hsh : " << hsh[pattern[i]] << endl;
            if (hsh[pattern[i]] == -1)
                return false;
            fin += st1[hsh[pattern[i]]];
            if (i < (pattern.length() - 1))
                fin += " ";
        }

        return myCmp(s, fin);
    }
};

int main()
{
    string p, v, s;
    cin >> p;
    int t = p.length();

    while (getline(cin, v))
    {
    }

    Solution sol;
    string res = (sol.wordPattern(p, v) == 1) ? "true" : "false";
    cout << res;

    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// class Solution
// {
// public:
//     bool myCmp(string s, string t)
//     {
//         // cout << "Mycmp : " << s << " ||| " << t << endl;
//         if (s.length() == t.length())
//         {
//             for (int k = 0; k < s.length(); k++)
//             {
//                 if (s[k] != t[k])
//                 {
//                     //// cout << s << "\t" << s.length() << "\t[" << s[k] << "]In If [" << t[k] << "]" << endl;
//                     return false;
//                 }
//                 else
//                 {
//                     //// cout << "Else True" << endl;
//                     //// cout << s << "\t" << s.length() << "\t[" << s[k] << "]In If [" << t[k] << "]" << endl;
//                 }
//             }
//             //// cout << "\nHere In If" << endl;
//             return true;
//         }
//         else
//         {
//             //// cout << "\n\t In Else" << endl;
//             // cout << "\nHere In Else" << endl;
//             return false;
//         }
//     }

//     bool wordPattern(string pattern, string s)
//     {

//         string st1[3000], fin = "";
//         int t = s.length(), k = 0;
//         string temp;
//         int hsh[1000] = {-1};
//         // cout << "\n\n\tPatter Len " << k << endl;
//         for (int j = 0; j < 1000; j++)
//             hsh[j] = -1;
//         int i;
//         // cout << "\n\n\n\n\n";
//         for (i = 0; i < s.length(); i++)
//         {
//             // cout << "\t\t\t S : " << s[i] << endl;
//         }
//         // cout << "\n\n\n\n\n";
//         for (i = 0; i <= s.length(); i++)
//         {
//             // cout << "=" << s[i];
//             if (s[i] == ' ' || s[i] == '\0')
//             {
//                 st1[k] = temp;
//                 // cout << " I=" << i << " " << k << "\t Temp " << temp << endl;
//                 if (hsh[pattern[k]] == -1)
//                     hsh[pattern[k]] = k;

//                 if (k > 0)
//                 {

//                     if (myCmp(st1[k], st1[k - 1]))
//                     {

//                         if (!(myCmp(string(1, pattern[k]), string(1, pattern[k - 1]))))
//                         {
//                             // cout << "\n\n\t Break On 67" << endl;
//                             return false;
//                         }
//                     }
//                 }

//                 k++;
//                 temp = "";
//             }
//             else
//                 temp += s[i];
//         }
//         // st1[k] = temp;
//         //// cout << k << "\t Temp " << st1->length() << endl;
//         // cout << st1[st1->length()] << endl;
//         //  if (hsh[pattern[k]] == -1)
//         //      hsh[pattern[k]] = k;

//         // if (k > 0)
//         // {

//         //     if (myCmp(st1[k], st1[k - 1]))
//         //     {

//         //         if (!(myCmp(string(1, pattern[k]), string(1, pattern[k - 1]))))
//         //         {
//         ////             cout << "\n\n\t Break On 67" << endl;
//         //             return false;
//         //         }
//         //     }
//         // }

//         // cout << "\n\n\nI=" << i << endl;
//         // cout << "\n\nBefore Last For " << st1->length() << endl;
//         for (int i = 0; i <= st1->length(); i++)
//         {
//             // if (!(myCmp(st1[hsh[pattern[i]]], st1[hsh[pattern[i]] - 1])))
//             // if (i > 0)
//             //     if (hsh[pattern[i - 1]] == -1)
//             //         return 1;
//             // bool kres = myCmp(st1[hsh[]])
//             fin += st1[hsh[pattern[i]]];
//             if (i < (pattern.length() - 1))
//                 fin += " ";
//         }
//         //// cout << "Final : " << fin << " ::::: S - " << s << endl;
//         //// cout << fin.length() << " : F" << endl;
//         //// cout << s.length() << " : S" << endl;
//         return myCmp(s, fin); // == 1 ? true : false;
//     }
// };

// int main()
// {
//     string p, v, s;
//     cin >> p;
//     int t = p.length();

//     // while (t--)
//     // {
//     //     cin >> s;
//     //     v += s + " ";
//     // }
//     while (getline(cin, v))
//     {
//     }

//     // v.erase(v.length() - 1, 1);
//     Solution sol;
//     string res = (sol.wordPattern(p, v) == 1) ? "true" : "false";
//     cout << res;

//     return 0;
// }