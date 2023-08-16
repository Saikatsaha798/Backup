class Shape
{
    public void area (int b, int h)
    {
        System.out.println("Print area");
    }
}

class Triangle extends Shape
{
    public void area (int b, int h)
    {
        System.out.println((int) (0.5*b*h));
    }
}


public class Learning 
{
    public static void main (String args[])
    {
        Triangle t = new Triangle();
        t.area(2,1);
    }
}
