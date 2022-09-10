#include <bits/stdc++.h>

using namespace std;

int digits_after_decimal_point(float x)
{
    int i;
    for (i = 0; x != rint(x); x += x, i++)
        ;
    return i;
}

float Area(int n, float b, float h)
{
    float res;
    if (n == 1)
        res = (b * h);
    else if (n == 2)
        res = ((0.5) * (b * h));
    else if (n == 3)
        res = ((3.14) * b * h);
    else if (n == 4)
        res = b * h;
    else if (n == 5)
        res = (3.14) * b * h;

    return res;
}
int main()
{
    int n;
    float b, h;
    cin >> n >> b >> h;
    double reu = Area(n, b, h);
    if (digits_after_decimal_point(reu) == 1)
        cout << reu << "0";
    else if (digits_after_decimal_point(reu) == 0)
        cout << reu << ".00";
    else
        cout << reu;
    return 0;
}
