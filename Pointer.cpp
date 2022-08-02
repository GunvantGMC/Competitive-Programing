#include <bits/stdc++.h>

using namespace std;

void update(int *a, int *b)
{
    int addT = (*a) + (*b);
    int subT = (*b) - (*a);
    (*a) = addT;
    (*b) = subT < 0 ? subT * -1 : subT;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;
    return 0;
}