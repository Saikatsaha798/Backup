#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int show(char a[10][10], int *d)
{
    int i,j;

    printf("Points : %d\n\n", *d-1);

    printf("+---------------------+\n");
    for (i=0; i<10; i++)
    {
        printf("| ");
        for (j=0; j<10; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("|\n");
    }
    printf("+---------------------+\n");

    return 0;
}


int food(char pg[10][10], int s[100][2], int f[2], int *d)
{
    int z, pos=1, r, i, j;
    srand(time(0));
    r = rand();
    while(1)
    {
        pos = 1;
        // printf("%d ", r);
        i = r%10;
        j = (r%100)/10;

        for (z=0; z<(*d); z++)
        {
            if ((s[z][0]==i) && (s[z][1]==j))
            {
                pos=0;
                break;
            }
        }

        if (pos==1)
        {
            f[0] = i;
            f[1] = j;
            pg[f[0]][f[1]] = '@';
            break;
        }
        r++;
    }

    return 0;
}

int eat(char a[10][10], int s[100][2], int f[2], int* d, int i, int j)
{
    food(a, s, f, d);
    (*d)++;
    
    return 0;
}

int move(char a[10][10], int s[100][2], int f[2], char m, int* d)
{
    int i=s[0][0], j=s[0][1], z, clear = 1;
    switch(m)
    {
        case 'w':
            i--;
            break;

        case 's':
            i++;
            break;

        case 'a':
            j--;
            break;

        case 'd':
            j++;
            break;

        default:
            break;
    }

    i = (i==10)? 0: i;
    i = (i==-1)? 9: i;
    j = (j==10)? 0: j;
    j = (j==-1)? 9: j;

    for (z=0; z<(*d); z++)
    {
        if ((s[z][0]==i) && (s[z][1]==j))
        {
            clear=0;
            break;
        }
    }

    if (clear == 1)
    {
        a[i][j] = '$';
        a[s[0][0]][s[0][1]] = '#';
        for (z=(*d); z>0; z--)
        {
            s[z][0] = s[z-1][0];
            s[z][1] = s[z-1][1];
        }

        if ((i==f[0]) && (j==f[1]))
        {
            eat(a, s, f, d, i, j);
        }
        else
        {
            if (a[s[*d][0]][s[*d][1]] == '#')
            {
                a[s[*d][0]][s[*d][1]] = ' ';
            }
        }
        s[0][0] = i;
        s[0][1] = j;
    }


    return 0;
}


int main()
{
    char pg[10][10] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };
    char dir;
    int sn[100][2];
    int fd[2];
    int *size;
    int r;
    
    size = (int*) malloc(sizeof(int));
    *size = 1;

    srand(time(0));
    r = rand();
    sn[0][0] = r%10;
    sn[0][1] = (r%100)/10;
    pg[sn[0][0]][sn[0][1]] = '#';
    show(pg, size);
    dir = getch();
    food(pg, sn, fd, size);

    while(1)
    {
        system("cls");
        move(pg, sn, fd, dir, size);
        show(pg, size);
        dir = getch();
    }

    return 0;
}
