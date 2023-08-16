import java.util.Scanner;

public class isAutomorphic
{
  static boolean Automorphic (int num)
  {
    int numSq = num*num, i=num;
    boolean flag=true;

    while (i > 0)
    {
      if (numSq%10 != i%10)
      {
        flag=false;
        break;
      }
      i /= 10;
      numSq /= 10;
    }          

    return flag;
  }  

  public static void main (String args[])
  {
    int num;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Number : ");
    num = input.nextInt();

    if (Automorphic(num))
    {
      System.out.println(num + " is Automorphic number.");
    }
    else
    {
      System.out.println(num + " is not Automorphic number.");
    }
  }
}
