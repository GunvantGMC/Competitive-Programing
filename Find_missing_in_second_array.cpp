//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// const int K = (1e7 + 10);
// int hshP[K];
// int hshN[K];
class Solution
{

public:
    vector<long long> findMissing(long long A[], long long B[],
                                  int N, int M)
    {

        vector<long long> g1;
        unordered_map<int, int> hshP;
        // unordered_map<int, int> hshN;
        for (int i = 0; i < M; i++)
        {

            // if (B[i] >= 0)
            hshP[B[i]]++;
            // else
            //     hshN[(B[i] * -1)]++;
        }

        for (int j = 0; j < N; j++)
        {
            long long num = A[j];
            bool exists = 0;
            // if (num >= 0)
            exists = hshP[A[j]] == 0;
            // else
            //     exists = hshN[(A[j] * -1)] == 0;

            if (exists)
                g1.push_back(num);
        }

        return g1;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<long long> ans;

        Solution ob;
        ans = ob.findMissing(a, b, n, m);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
