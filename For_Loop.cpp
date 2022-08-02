#include <bits/stdc++.h>

using namespace std;

int main()
{
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
    };
    int no1;
    int no2;

    string op1 = "";
    string op2 = "";

    cin >> no1 >> no2;

    for (int i = no1; i <= no2; i++)
    {
        int no = i;
        if (no > 9)
        {
            op2 += (no % 2 == 0) ? "even\n" : "odd\n";
        }
        else
        {
            op1 += (st[no] + "\n");
        }
    }

    cout << op1 << op2;

    return 0;
}