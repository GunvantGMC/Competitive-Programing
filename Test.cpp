#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here
        long long pf[N + 1] = {};
        for (int i = 1; i <= N; i++)
        {
            pf[i] = pf[i - 1] + Arr[i - 1];
            cout << pf[i] << " " << pf[i - 1] << " " << Arr[i - 1] << endl;
        }
        long long maxCount = -1;
        for (int i = K; i <= N; i++)
        {
            cout << pf[i] << " : " << maxCount;
            if (maxCount < pf[i] - pf[i - K])
            {
                maxCount = pf[i] - pf[i - K];
            }
            cout << " " << maxCount << endl;
        }
        return maxCount;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends