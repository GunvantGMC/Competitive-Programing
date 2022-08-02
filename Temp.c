#include <stdio.h>
long calc(int tot, int *a)
{
    long sumPrimeNum = 0;
    int j;
    for (int i = 0; i < tot; i++)
    {
        int num = a[i];
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
                break;
        }
        if (j == num)
            sumPrimeNum += num;
    }

    return sumPrimeNum;
}

int main()
{
    int t, i = 0;
    scanf("%d", &t);
    int arr[t];
    while (i < t)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        i++;
    }
    long n = calc(t, arr);
    printf("%ld", n);
    return 0;
}