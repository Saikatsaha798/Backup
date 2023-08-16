import java.util.Scanner;

public class Add
{
  public static void main (String args[])
  {
    Scanner input = new Scanner(System.in);
    int a, b, c;

    System.out.print("Enter the value of A : ");
    a = input.nextInt();

    System.out.print("Enter the value of B : ");
    b = input.nextInt();

    c = a+b;

    System.out.println("The sum of A and B : " + c);
  }
}
