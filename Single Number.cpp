#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> hsh;
        int res;
        // sort(nums.begin(), nums.end());
        // res = nums[nums.size() - 1];
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (hsh[nums[i]] == 0)
        //         hsh[nums[i]]++;
        //     else
        //         hsh[nums[i]]--;

        //     if ((nums[i - 1] < nums[i]) && (hsh[nums[i - 1]] == 1))
        //     {
        //         res = nums[i - 1];
        //         break;
        //     }
        // }

        for (int i = 0; i < nums.size(); i++)
        {
            if (hsh[nums[i]] == 0)
                hsh[nums[i]]++;
            else
                hsh[nums[i]]--;
        }
        for (int i = 0; i < nums.size(); i++)
        {

            if (hsh[nums[i]] == 1)
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> n;
    while (cin)
    {
        int v;
        cin >> v;
        n.push_back(v);
    }
    n.pop_back();
    Solution s;
    cout << s.singleNumber(n);

    return 0;
}