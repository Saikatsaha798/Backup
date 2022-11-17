#include <stdio.h>

int sum(int s,int e)
{
    int sm = 0;
    if (s == e)
    {
        return e;
    }
    else
    {
        return(s + sum(s+1,e));
    }
    return sm;
}

int main()
{
    int d = sum(5,10);
    printf("%d", d);
    return 0;
}