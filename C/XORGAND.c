#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t!=0)
    {
        int n,i,q;
        int num[n];
        scanf("%d", &n);

        for (i=0; i<n; i++)
        {
            scanf("%d", num[i]);
        }

        scanf("%d", &q);
        while (q!=0)
        {
            int l,r,x,nt,j,c=1,ans=0;
            scanf("%d %d %d", &l, &r, &x);
            
            nt = l-r+1;
            int tnum[nt];

            for (j=l-1; j<r; j++)
            {
                tnum[i] = num[i]
            }

            while(1)
            {
                if (x>c)
                {
                    c *= 2;
                }
                else
                {
                    break;
                }
            }

            for (j=0; j<nt; j++)
            {
                if !((c<tnum[j]) && (tnum[j]<(2*c)))
                {
                    ans++;
                }
            }

            printf("%d", ans);

            q--;
        }

        t--;
    }
    return 0;
}