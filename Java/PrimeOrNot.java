import java.util.Scanner;

public class PrimeOrNot
{
  public static void main (String args[])
  {
    Scanner input = new Scanner(System.in);
    int n, i=2;
    boolean c=true;

    System.out.print("Enter the number : ");

    n = input.nextInt();

    while (i<=n/2)
    {
      if (n%i==0)
      {
        System.out.println(n + " is not prime.");
        c = false;
        break;
      }
      i++;
    }

    if (c) 
    {
      System.out.println(n + " is prime.");
    }
  
  }
}
