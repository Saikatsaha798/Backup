import java.util.Scanner;

public class facRec
{
  static int factorial (int n)
  {
    if (n == 1)
    {
      return 1;
    }
    else
    {
      return n * factorial(n-1);
    }
  }

  public static void main (String args[])
  {
    int n;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Number : ");
    n = input.nextInt();

    System.out.println("Factorial of " + n + " : " + factorial(n));
  }
}
