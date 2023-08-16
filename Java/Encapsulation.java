

class Bank
{
    private float account_balance;

    void show_balance ()
    {
        System.out.println("Account Balance : Rs " + this.account_balance);
    }

    void add_money (float money)
    {
        this.account_balance += money;
        System.out.println("Rs " +money+ " credited.");
        show_balance();
    }

    void withdraw_money (float money)
    {
        this.account_balance -= money;
        System.out.println("Rs " +money+ " debited.");
        show_balance();
    }

    void Bank ()
    {
        this.account_balance = 0;
    }
}

public class Encapsulation 
{
    public static void main (String args[])
    {
        Bank HDFC = new Bank();
        HDFC.show_balance();
        HDFC.add_money(2000);
        HDFC.withdraw_money(500);
    }
}
