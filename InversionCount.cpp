
#include <iostream>
using namespace std;

int inversionCount(int *A, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
                c++;
        }
    }
    return c;
}

int main()
{
    // Write C++ code here

    int n;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++)
        cin >> arr[k];

    cout << inversionCount(arr, n);
    return 0;
}
