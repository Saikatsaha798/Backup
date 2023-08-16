import java.util.Scanner;

public class limitArmstrong
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
    int limit, i;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the Number : ");
    limit = input.nextInt();

    System.out.print("Armstrong until " + limit + " :\t");
    for (i=1; i<=limit; i++)
    {
      if (Armstrong(i))
      {
        System.out.print(i + "\t");
      }
    }
  }
}
