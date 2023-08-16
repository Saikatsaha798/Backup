import java.util.Scanner;

public class isArmstrong
{
  static boolean Armstrong(int num)
  {
    int n=0, i=num, out=0, j, f;

    while (i>0)
    {
      n++;
      i /= 10;
    }    

    i=num;
    while (i>0)
    {
      f = 1;
      for (j=0; j<n; j++)
      {
        f *= i%10;
      }
      out += f;
      i /= 10;
    }       

    if (num == out)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  public static void main (String args[])
  {
    int num;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Number : ");
    num = input.nextInt();

    if (Armstrong(num))
    {
      System.out.println(num + " is an Armstrong number.");
    }
    else
    {
      System.out.println(num + " is not an Armstrong number.");
    }
  }
}
