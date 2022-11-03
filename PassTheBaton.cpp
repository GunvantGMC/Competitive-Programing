#include <bits/stdc++.h>

using namespace std;

vector<int> batonPass(int friends, long time)
{

    vector<int> ans;

    int oddEven = 1, count = 0;

    if (friends > time)
    {

        ans.push_back(time);
        ans.push_back(time + 1);
        return ans;
    }
    else
    {
        int ng = time % friends;

        if (ng == 0)
        {
            ans.push_back(friends - ng - 1);
            ans.push_back(friends - ng);
            return ans;
        }
        else
        {
            ans.push_back(friends - ng);
            ans.push_back(friends - ng - 1);

            return ans;
        }
    }
}

vector<int> batonPass2(int n, long t)
{

    vector<int> ans;

    int oddEven = 1, count = 0;

    while (true)
    {

        if (oddEven & 1)
        {
            if (count == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    count++;
                    if (t == count)
                    {
                        if (i != n - 1)
                        {
                            // cout << i+1 << " " << i+2;
                            ans.push_back(i + 1);
                            ans.push_back(i + 2);
                            return ans;
                        }
                        else
                        {
                            ans.push_back(i + 1);
                            ans.push_back(i);
                            return ans;
                        }
                    }
                }
            }
            else
            {
                for (int i = 1; i < n; i++)
                {
                    count++;
                    if (t == count)
                    {
                        if (i != n - 1)
                        {
                            ans.push_back(i + 1);
                            ans.push_back(i + 2);
                            return ans;
                        }
                        else
                        {
                            ans.push_back(i + 1);
                            ans.push_back(i);
                            return ans;
                        }
                    }
                }
            }

            oddEven++;
        }
        else
        {
            for (int i = n - 2; i >= 0; i--)
            {
                count++;
                if (t == count)
                {
                    if (i != 0)
                    {
                        ans.push_back(i + 1);
                        ans.push_back(i);
                        return ans;
                    }
                    else
                    {
                        ans.push_back(i);
                        ans.push_back(i + 1);
                        return ans;
                    }
                }
            }
            oddEven++;
        }
    }
}

int main()
{
    long long friends, time;
    cin >> friends >> time;

    vector<int> g1 = batonPass2(friends, time);
    for (const int &i : g1)
    {
        cout << i << endl;
    }

    return 0;
}

// int main()
// {
//     int f, t;
//     cin >> f >> t;
//     bool reversed = false;
//     int i = 1;
//     int counter = 1;

//     // t++;
//     int last = 0, first = 0;
//     while (true)
//     {
//         first = counter;
//         if (i > t)
//         {
//             break;
//         }
//         i++;
//         if (reversed)
//         {
//             counter--;
//         }
//         else
//         {
//             counter++;
//         }
//         if (counter == f)
//         {
//             reversed = true;
//         }

//         if (counter == 0)
//         {
//             reversed = false;
//         }
//         last = first;
//     }
//     cout << last << endl
//          << first << endl;
//     return 0;
// }