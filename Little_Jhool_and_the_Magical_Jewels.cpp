#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4] = {};

        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {

            if (str[i] == 'r')
                arr[0]++;

            else if (str[i] == 'b')
                arr[1]++;

            else if (str[i] == 'u')
                arr[2]++;

            else if (str[i] == 'y')
                arr[3]++;
        }

        cout << min(min(min(arr[3], arr[2]), arr[1]), arr[0]) << endl;
    }

    return 0;
}