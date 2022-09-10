#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> hsh;
void checkOptimusPrime(int i, int j);
void primeCalculator(int t)
{

    hsh[2] = 1;
    int i = 3;
    while (i < int(1e5 + 10))
    {
        int no = i;
        int j = 2;
        if (no % 2 == 0)
        {
            i++;
            continue;
        }
        while (j < no)
        {
            if (no % j == 0)
                break;
            j += 1;
        }

        if (j == no)
            hsh[i] = 1;
        i++;
    }
    while (t--)
    {
        int k, p;
        cin >> k >> p;
        checkOptimusPrime(k, p);
    }
}

void checkOptimusPrime(int i, int j)
{
    int count = 0;
    while (i < j)
    {
        string s = to_string(i);
        int k = 0;
        if (s.length() == 1 || hsh[i] != 1)
        {
            i++;
            continue;
        }
        while (k < s.length())
        {
            int ps = s[k] - '0';
            if (ps == 1)
            {
                k++;
                continue;
            }
            if (ps == (s[k + 1] - '0'))
                break;

            if (hsh[ps] != 1)
                break;
            k++;
        }
        if (k == s.length())
            count++;

        i++;
    }
    cout << count << endl;
}

int main()
{
    // Code Here
    int t;
    cin >> t;
    primeCalculator(t);

    return 0;
}