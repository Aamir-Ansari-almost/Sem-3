import java.util.*;

class Recursion {

    static int sum = 0, rem;

    // method to claculate GCD
    static int gcd(int n1, int n2) {

        if (n2 != 0) {
            return gcd(n2, n1%n2);
        } else {
            return n1;
        }

    }

    // Fibonacci
    static int fibo(int n) {

        if (n==0 || n==1) {
            return n;
        } else {
            return (fibo(n-1) + fibo(n-2));
        }

    }

    // Reverse
    static int reverse(int n) {

        if (n != 0) {
            rem = n % 10;
            sum = sum*10 + rem;
            reverse(n/10);
        } else {
            return sum;
        }
        return sum;

    }

    // Ramanujan series
    static int seriesSum (int n) {

        if (n != 0) {
            sum += n;
            return seriesSum(n-1);
        }
        return sum;

    }

    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        int choice;
        
        while (true) {
            // choices
            System.out.println("********************");
            System.out.println("*1 GCD and LCM");
            System.out.println("*2 Fibonacci");
            System.out.println("*3 Reverse");
            System.out.println("*4 Ramanujan series");
            System.out.println("*5 EXIT");
            System.out.print("Enter Your choice :  ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:     // GCD and LCM
                    System.out.print("Enter First number  :  ");
                    int num1 = sc.nextInt();
                    System.out.print("Enter Second number :  ");
                    int num2 = sc.nextInt();

                    // get GCD
                    int gcd = gcd(num1, num2);

                    // get LCM
                    int lcm = (num1 * num2) / gcd;

                    // printing
                    System.out.println("GCD of "+num1+" and "+num2+" is :  "+gcd);
                    System.out.println("LCM of "+num1+" and "+num2+" is :  "+lcm);

                    sum=0;
                    break;

                case 2:     // Fibonacci
                    // input
                    int num;
                    System.out.print("Enter number of elements required in Fibonacci series :  ");
                    num = sc.nextInt();
                    
                    // print series
                    for (int i=0 ; i<num ; i++) {
                        System.out.print(fibo(i)+"  ");
                    }
                    System.out.println();

                    sum=0;
                    break;

                case 3:     // Reverse
                    // input
                    int reverse;
                    System.out.print("Enter a number to Reverse :  ");
                    num = sc.nextInt();
                    reverse = reverse(num);
                    
                    System.out.println("Reverse of "+num+" is :  "+reverse);

                    sum=0;
                    break;

                case 4:     //Ramanujan series
                    // input
                    int numRam=0;
                    System.out.print("Enter value of n in Ramanujan summation series :  ");
                    numRam = sc.nextInt();

                    // display
                    System.out.println("Sum of "+numRam+" terms in Ramanujan series is :  "+seriesSum(numRam));
                    sum=0;
                    break;
                
                case 5:     // Exit
                    System.out.println("*** E X I T I N G ***");
                    System.exit(1);
                    
                default: 
                    System.out.println("INVALID INPUT");

            }
        }
    }
}


