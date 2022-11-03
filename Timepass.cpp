// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int myI[] = {10, 20, 30, 30, 20, 10, 10, 20};
//     vector<int> v(myI, myI + 8);
//     sort(v.begin(), v.end());
//     vector<int>::iterator low, up;
//     low = lower_bound(v.begin(), v.end(), 20);
//     up = upper_bound(v.begin(), v.end(), 20);
//     cout << (low - v.begin()) << endl;
//     cout << (up - v.begin()) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     // Code Here
//     string a;
//     string b = "Remember";
//     string c = "Customer Is God";
//     a.append(b);
//     a.append(c, 6, 3);
//     a.append(c.begin() + 6, c.end());
//     a.append(5, 0x2E);

//     cout << a << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 1, y = 0;
    cout << !(x && y);
    return 0;
}