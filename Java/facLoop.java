import java.util.Scanner;

public class facLoop
{
  public static void main (String args[])
  {
    int c = 1, n, i;
    Scanner input = new Scanner (System.in);

    System.out.print("Enter the Number : ");
    n = input.nextInt();

    c = 1;
    for (i = 2; i <= n; i++)
    {
      c *= i;
    }

    System.out.println("Factorial of " + n + " : " + c);
  }
}
