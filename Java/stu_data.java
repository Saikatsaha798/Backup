import java.util.Scanner;

class Stu
{
    static String col_name;
    int stu_id;
    String stu_name;

    static void setCollege(String college)
    {
        col_name = college;
    }

    Stu (int stu_id, String stu_name)
    {
        this.stu_id = stu_id;
        this.stu_name = stu_name;
    }

    void showData (int c)
    {
        System.out.println("Student Data "+ c + " ---->\nStudent Id : " + this.stu_id + "\nStudent Name : " + this.stu_name + "\nCollege Name : " + col_name);
    }
}

public class stu_data
{
public static void main (String args[])
{
    Scanner input = new Scanner(System.in);
    int n, i, stu_id;
    String stu_name, col_name;

    System.out.print("Enter the Number of Students : ");
    n = input.nextInt();
    input.nextLine();

    Stu[] stu = new Stu[n];

    System.out.print("Enter the College Name : ");
    col_name = input.nextLine();

    Stu.setCollege(col_name);
    
    for (i=0; i<n; i++)
    {
    System.out.print("Student " + (i+1) + "-->\nEnter Student id : ");
    stu_id = input.nextInt();
    input.nextLine();
    System.out.print("Enter Employee name : ");
    stu_name = input.nextLine();
    stu[i] = new Stu(stu_id, stu_name);
    }

    System.out.print("\nShowing data ---\n\n");

    for (i=0; i<n; i++)
    {
        stu[i].showData(i+1);
    }
}
}
