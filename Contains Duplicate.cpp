#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    unordered_map<int, int> hshP;

    for (int i = 0; i < nums.size(); i++)
    {

        hshP[nums[i]]++;
        if (hshP[nums[i]] > 1)
            return true;
    }

    return false;
}

int main()
{
    vector<int> data;
    int i = 0;
    while (cin)
    {
        int v;
        cin >> v;
        data.push_back(v);
        i++;
    }
    data.pop_back();

    if (containsDuplicate(data))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}