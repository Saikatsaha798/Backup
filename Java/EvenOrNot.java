import java.util.Scanner;

public class EvenOrNot
{
  public static void main(String args[])
  {
    Scanner input = new Scanner(System.in);
    int a;

    System.out.print("Enter the number : ");

    a = input.nextInt();

    if (a%2==0)
    {
      System.out.println(a + " is even.");
    }

    else
    {
      System.out.println(a + " is odd.");
    }
  }
}
