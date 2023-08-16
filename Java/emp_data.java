import java.util.Scanner;

class Emp
{
  int emp_id;
  String emp_name;

  Emp (int emp_id, String emp_name)
  {
    this.emp_id = emp_id;
    this.emp_name = emp_name;
  }

  void showData (int c)
  {
    System.out.println("Employee Data "+ c + " ---->\nEmployee Id : " + this.emp_id + "\nEmployee Name : " + this.emp_name);
  }
}

public class emp_data
{
  public static void main (String args[])
  {
    Scanner input = new Scanner(System.in);
    int n, i, emp_id;
    String emp_name;

    System.out.print("Enter the Number of Employees : ");
    n = input.nextInt();

    Emp[] emp = new Emp[n];
    
    for (i=0; i<n; i++)
    {
      System.out.print("Employee " + (i+1) + "-->\nEnter Employee id : ");
      emp_id = input.nextInt();
      input.nextLine();
      System.out.print("Enter Employee name : ");
      emp_name = input.nextLine();
      emp[i] = new Emp(emp_id, emp_name);
    }

    System.out.print("\nShowing data ---\n\n");

    for (i=0; i<n; i++)
    {
      emp[i].showData(i+1);
    }
  }
}
