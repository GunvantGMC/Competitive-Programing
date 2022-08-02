#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {

        long sum = 0;
        long tempTotal = 0;

        for (int i = 0; i < N; i++)
        {
            if (i < K)
                tempTotal += Arr[i];
            else
                tempTotal = tempTotal + Arr[i] - Arr[i - K];

            if (tempTotal > sum)
                sum = tempTotal;
        }
        return sum;
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

// long maximumSumSubarray(int K, vector<int> &Arr, int N)
// {

//     long sum = 0;
//     long first = 0;
//     long tempTotal = 0;
//     for (int j = 0; j < K; j++)
//     {
//         tempTotal += Arr[j];
//     }
//     sum = tempTotal;
//     for (int i = K; i < N; i++)
//     {
//         tempTotal = tempTotal + Arr[i] - Arr[first];
//         first = first + 1;

//         if (tempTotal > sum)
//             sum = tempTotal;
//     }
//     return sum;
// }