#include <stdio.h>

int main()
{
    int t,n,x,y,at;

    scanf("%d", &t);

    while (t!=0)
    {
        at = 0;
        scanf("%d %d %d", &n, &x, &y);

        at += (x-1);
        at += (y-1);
        at += (n-x);
        at += (n-y);

        at += ((x-1)<(y-1))? (x-1): (y-1);
        at += ((x-1)<(n-y))? (x-1): (n-y);
        at += ((n-x)<(y-1))? (n-x): (y-1);
        at += ((n-x)<(n-y))? (n-x): (n-y);

        printf("%d", at);

        t--;
    }

    return 0;
}