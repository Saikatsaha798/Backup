#include <stdio.h>

int main()
{
    int t, z, nt, i, j, mh = 0, c = 0;

    scanf("%d", &t);

    while (t != 0)
    {   
        mh = 0;
        c = 0;

        scanf("%d", &nt);
        int h[nt];

        for (i=0; i<nt; i++)
        {
            scanf("%d", &h[i]);
        }
        
        if (nt == 1)
        {
            mh = h[0];
        }

        else
        {    
            for (j=0; j<nt; j++)
            {
                for (i=0; i<nt-1; i++)
                {
                    if (h[i]<h[i+1])
                    {
                        z = h[i];
                        h[i] = h[i+1];
                        h[i+1] = z;
                    }
                }
            }

            for (i = 0; i<nt-1; i++)
            {
                if (h[i]==h[i+1])
                {   
                    c++;
                }

                else if(mh<h[i]+c)
                {
                    mh = h[i]+c;
                    c=0;
                }
            }
        }

        printf("%d\n", mh);

        t--;
    }

    return 0;
}