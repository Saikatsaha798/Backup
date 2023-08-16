import java.util.Scanner;

public class palinStr
{
  public static void main (String args[])
  {
    String str;
    int i, j;
    boolean flag=true;
    Scanner input = new Scanner(System.in);

    System.out.print("Enter the String : ");
    str = input.nextLine();

    i = 0;
    j = str.length()-1;

    while (i<j)
    {
      if (str.charAt(i) != str.charAt(j))
      {
        flag = false;
        break;
      }

      i++;
      j--;
    } 

    if (flag)
    {
      System.out.println(str + " is a Palindrome string.");
    }

    else
    {
      System.out.println(str + " is not a Palindrome string.");
    }
  }
}
