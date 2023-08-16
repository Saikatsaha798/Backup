import java.util.Scanner;

public class palinNum
{
  public static void main (String args[])
  {
    int num, revNum=0, i;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Number : ");
    num = input.nextInt();

    i = num;
    while (i > 0)
    {
      revNum = (10 * revNum) + (i % 10);
      i /= 10;
    }
    
    if (num == revNum)
    {
      System.out.println(num + " is a Palindrome number.");
    }

    else
    {
      System.out.println(num + " is not a Palindrome number.");
    }

  }
}
