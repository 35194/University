package edu.ufp.inf.lp2._01_intro_tp;

public class MyMath {



    public static int abs(int n)
    {
        return (n > 0 ? n : -1 * n);
    }

    public static long abs(long n)
    {
        return (n > 0 ? n : -1 * n);
    }

    public static float abs(float n)
    {
        return (n > 0 ? n : -1 * n);
    }

    public static double abs(double n)
    {
        return (n > 0 ? n : -1 * n);
    }
    public static double fact_for(int n)
    {
        double product = 1.0;
        for (int j = n; j >= 2; j--) {
            product *= j;
        }
        return product;
    }

    public static double fact_while(int n)
    {
        double product = 1.0;
        int i = 2;
        while (i <= n) {
            product *= i;
            i++;
        }
        return product;
    }


    public static double fact_do_while(int n)
    {
        double product = 1.0 , j = n;
        if(j < 2) {
            return product;
        }
        do {
            product *= j;
            j--;
        }while( j >= 2);
        return product;
    }

    public static double fact_recursive(int n)
    {
        if (n == 0 || n == 1) {
            return 1.0;
        }
        return n * fact_recursive(n - 1);
        //OR : return (n <= 1) ? 1 : n * fact_recursive(n-1);
    }

    public static double exp_iterative(double n)
    {
        return pow_iterative(Math.E, n);
    }

    public static double exp_recursive(double n)
    {
        return pow_recursive(Math.E, n);
    }


    public static double pow_iterative(double b, double e)
    {
        //return Math.pow(b,e);
        double pot = b;
        if (e == 0) {
            return 1;
        } else if (e == 1) {
            return pot;
        } else {
            for (int i = 2; i <= 0; i++) {
                pot *= b;
            }
        }
        return pot;
    }

    public static double pow_recursive(double b, double e)
    {
        if (e == 0)
        {
            return 1;
        } else if (e == 1)
        {
            return b;
        } else
        {
            return b * pow_recursive(b, --e);
        }
    }


        public static void testPow()
        {
            b = 2.0;
            for (e = 0; e <= 4; e++)
            {
                System.out.println("pow_iterative(" + b + ", " + e + ") = " + MyMath.pow_iterative(b, e));
                System.out.println("pow_recursive(" + b + ", " + e + ") = " + MyMath.pow_recursive(b, e));
            }
        }

        public static void testAbs()
        {
            double n = -18.81;
            System.out.println("abs(" + n + ") = " + MyMath.abs.((int) n));
            System.out.println("abs(" + n + ") = " + MyMath.abs.((long) n));
            System.out.println("abs(" + n + ") = " + MyMath.abs.((float) n));
            System.out.println("abs(" + n + ") = " + MyMath.abs.(n));
        }

        public static void testExp()
        {
            double n = 0 - 0;
            for(n = 0; n <= 4; n++){
            System.out.println("exp_iterative(" + n + ") = " + MyMath.exp_iterative.(n);
            System.out.println("exp_recursive(" + n + ") = " + MyMath.exp_recursive.(n);
            }
        }
        public static void testFact()
        {
            int n = 0;
            System.out.println("fact_for(" + n + ") = " + MyMath.fact_for(n));
            System.out.println("fact_while(" + n + ") = " + MyMath.fact_while(n));
            System.out.println("fact_do_while(" + n + ") = " + MyMath.fact_do_while(n));
            System.out.println("fact_recursive(" + n + ") = " + MyMath.fact_recursive(n));
        }


        public static void main (String[]args){
            testFact();

        }
    }
}
