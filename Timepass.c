
#include <stdio.h>

typedef struct
{
    char *x;
    char *y;
} t;

void f1(t s);
void f2(t *p);

int main()
{
    // Code Here
    static t s = {"M", "N"};
    printf("%s%s ", s.x, s.y);
    f1(s);
    printf("%s%s ", s.x, s.y);
    f2(&s);
    printf("%s%s ", s.x, s.y);
    return 0;
}

void f1(t s)
{
    s.x = "U";
    s.y = "V";
    printf("%s%s ", s.x, s.y);
}

void f2(t *p)
{
    p->x = "P";
    p->y = "Q";
    printf("%s%s ", p->x, p->y);
}