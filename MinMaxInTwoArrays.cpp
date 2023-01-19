#include <bits/stdc++.h>

using namespace std;

int MinMaxInTwoArrays(int arr1[], int arr2[], int l1, int l2, int k)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < l1; i++)
    {
        if (arr1[i] > k)
            a++;
    }

    for (int i = 0; i < l2; i++)
    {
        if (arr2[i] < k)
            b++;
    }

    return max(a, b);
}

int main()
{
    int a1[] = {1, 5, 7, 22, 6, 6, 8};
    int a2[] = {14, 7, 22, 5, 32, 77, 12, 4};
    int s1 = sizeof(a1) / sizeof(a1[0]);
    int s2 = sizeof(a2) / sizeof(a2[0]);
    cout << MinMaxInTwoArrays(a1, a2, s1, s2, 20);
    return 0;
}