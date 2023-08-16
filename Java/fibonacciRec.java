import java.util.Scanner;

public class fibonacciRec
{
  static void fibonacci (int a, int b, int n)
  {
    if (a <= n)
    {
      System.out.print(a + "\t");
      fibonacci(b, a+b, n);
    }
  }

  public static void main (String args[])
  {
    Scanner input = new Scanner(System.in);
    int n;

    System.out.print("Enter the Limit : ");
    n = input.nextInt();

    System.out.print("Fibonacci series until " + n + " :\t");
    fibonacci(1, 1, n);
  }
}
