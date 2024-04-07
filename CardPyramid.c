#include <stdio.h>

int cardPyramid(int n);

void main()
{
    int n;
    scanf("%d", &n);
    int cards = cardPyramid(n);
    printf("%d", cards);
}

int cardPyramid(int n)
{
    return n != 0 ? (n * (3 * n + 1) / 2) % 1000007 : -1;
}