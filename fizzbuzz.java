
public class fizzbuzz
{
    public static void main(String args[])
    {
        boolean p;

        for (int i = 1; i <= 100; i ++)
        {
            p = false;
            if (0 == (i % 3))
            {
                p = true;
                System.out.print("fizz");
            }
            if (0 == (i % 5))
            {
                p = true;
                System.out.print("buzz");
            }
            if (false == p)
            {
                System.out.println(i);
            }
            else
            {
                System.out.print("\n");
            }
        }
    }
}
