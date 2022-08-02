#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;

    while (num--)
    {
        string v1, v2;
        cin >> v1 >> v2;

        int j = 0;
        int count = 0;
        int hsh[int(1e5 + 10)] = {0};
        int length = v1.length();

        while (j < length)
        {
            hsh[int(v1[j])]++;
            count++;
            j++;
        }
        j = 0;
        length = v2.length();
        while (j < length)
        {
            if (hsh[int(v2[j])] >= 1)
            {
                hsh[int(v2[j])]--;
                count--;
            }
            else
            {
                count++;
            }

            j++;
        }
        cout << count << endl;
    }

    return 0;
}