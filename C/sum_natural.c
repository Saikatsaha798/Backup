#include <stdio.h>

int main()
{
  int c, i, n;

  printf("Enter the Number of Natural Numbers to Add : ");
  scanf("%d", &n);

  c = 0;

  for (i=1; i<=n; i++)
  {
    c += i;
  }

  printf("Sum of First %d Natural Numbers : %d\n", n, c);

  return 0;
}
