abstract class vehicle
{
    abstract void run();
}

class bike extends vehicle
{
    void run ()
    {
        System.out.println("Bike runs on 2 tires.");
    }
}

class car extends vehicle
{
    void run ()
    {
        System.out.println("Car runs on 4 tires.");
    }
}

public class vehicle_run {
    public static void main (String args[])
    {
        bike hero = new bike();
        car maruti = new car();

        hero.run();
        maruti.run();
    }
}
