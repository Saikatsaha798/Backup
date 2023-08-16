#include <stdio.h>

int push (int stack[], int size, int tos, int value)
{
  if (tos >= size-1)
  {
    printf("Overflow detected!\n");
    return tos;
  }
  else 
  {
    stack[++tos] = value;
    printf("%d pushed into.\n", stack[tos]);
    return tos;
  }
}

int pop (int stack[], int tos)
{
  if (tos <= -1)
  {
    printf("Underflow detected!\n");
    return tos;
  }
  else 
  {
    printf("%d poped out.\n", stack[tos]);
    tos--;
    return tos;
  }
}

void show_stack (int stack[], int tos)
{
  int i;
  if (tos >= 0)
  {
    printf("STACK :\n");
    for (i=tos; i>=0; i--)
    {
      printf("%d\n", stack[i]);
    }
  }

  else 
  {
    printf("Empty stack detected!\n");
  }
} 

void main ()
{
  int n, tos=-1, choice, value, run=1;

  printf("Enter the size of STACK : ");
  scanf("%d", &n);

  int stack[n];

  while (run)
  {

    printf("MENU ---\n"
"1. Push\n"
"2. Pop\n"
"3. Display\n"
"4. Exit\n"
"Enter choice : ");

    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        printf("Enter the Value : ");
        scanf("%d", &value);
        tos = push(stack, n, tos, value);
        break;
      
      case 2:
        tos = pop(stack, tos);
        break;

      case 3:
        show_stack(stack, tos);
        break;
        
      case 4:
        run = 0;
        break;

      default:
        printf("Wrong choice!\n");
    }
  }
}
