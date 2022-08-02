#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no;
    string st[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "Greater than 9",
    };
    cin >> no;
    if (no <= 9)
        cout << st[no];
    else
        cout << st[10];
    return 0;
}

//    if (no == 0)
//         cout << "";
//     else if (no == 1)
//         cout << "";
//     else if (no == 2)
//         cout << "";
//     else if (no == 3)
//         cout << "";
//     else if (no == 4)
//         cout << "";
//     else if (no == 5)
//         cout << "";
