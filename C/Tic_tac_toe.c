#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

char check(char arr[3][3])
{
	int i,j,tie=1;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (!((arr[i][j]=='X') || (arr[i][j]=='O')))
			{
				tie = 0;
				break;
			}
		}
	}
	
	if (tie == 1)
	{
		return 't';
	}

	for (i=0; i<3; i++)
	{
		if (arr[i][0] == arr[i][1])
		{
			if (arr[i][1] == arr[i][2])
			{
				return arr[i][0];
			}
		}
		if (arr[0][i] == arr[1][i])
		{
			if (arr[1][i] == arr[2][i])
			{
				return arr[0][i];

			}
		}
		
	}
	
	if (arr[0][0] == arr[1][1])
	{
		if (arr[1][1] == arr[2][2])
		{
			return arr[1][1];
		}
	}
	
	if (arr[0][2] == arr[1][1])
	{
		if (arr[1][1] == arr[2][0])
		{
			return arr[1][1];
		}
	}
	
	return ' ';
}

int win(char arr[3][3], char user1[], char user2[], char sym1, char sym2)
{
	char winsym = check(arr);
	
	if (winsym == sym1)
	{
		printf("%s is the winner!\n", user1);
		getch();
		return 0;
	}
	else if (winsym == 't')
	{
		printf("Match Tied!\n");
		getch();
		return 0;
	}
	else if (winsym == sym2)
	{
		printf("%s is the winner!\n", user2);
		getch();
		return 0;
	}
	else
	{
		return 1;
	}
}

int mark(char c, char arr[3][3], char sym)
{
	int i,j;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (c == arr[i][j])
			{
				arr[i][j] = sym;
				printf("The Changes Made ...\n");
				return 0;
			}
		}
	}
	printf("Invalid Choice ...\n");
	return 1;
}


int try(char u[], char sym, char arr[3][3])
{
	int t=1;
	char c;
	printf("<--%s-->\n", u);
	while (t)
	{	
		printf("Enter postion to mark : ");
		scanf(" %c", &c);
		t = mark(c, arr, sym);
	}
}

char symbol()
{
	int r;
	srand(time(0));
	r = rand();
	if (r%2==0)
	{
		return 'X';
	}
	else
	{
		return 'O';
	}
}

int show(char arr[3][3])
{
	system("cls");
	int i,j;
	
	printf("+---+---+---+\n");
	
	for (i=0; i<3; i++)
	{
		printf("| ");
		for (j=0; j<3; j++)
		{
			printf("%c | ", arr[i][j]);
		}
		printf("\n+---+---+---+\n");
	}
	return 0;
}

int main()
{
	int t=1;
	char arr[3][3] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
		};
	char sym1,sym2;
		
	char user1[30], user2[30];
	printf("Enter User1 name : ");
	scanf("%s", user1);	
	printf("Enter User2 name : ");
	scanf("%s", user2);
	
	sym1 = symbol();
	sym2 = (sym1 == 'X')? 'O': 'X';
	
	printf("%s : %c\n", user1, sym1);
	printf("%s : %c\n", user2, sym2);

	printf("Press any to continue ...\n");
	getch();

	show(arr);
	
	while (t)
	{
		try(user1, sym1, arr);
		show(arr);
		t = win(arr,user1,user2,sym1,sym2);
		if (t==0)
		{
			break;
		}
		
		try(user2, sym2, arr);
		show(arr);
		t = win(arr,user1,user2,sym1,sym2);
	}
	return 0;
}
