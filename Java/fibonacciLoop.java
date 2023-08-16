import java.util.Scanner;

public class fibonacciLoop
{
  public static void main (String args[])
  {
    int a=1, b=1, t, n;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Limit : ");
    n = input.nextInt();

    System.out.print("Fibonacci series until " + n + " : \t");

    while (a <= n)
    {
      System.out.print(a + "\t");
      t = a;
      a = b;
      b = b + t;
    }
  }
}
