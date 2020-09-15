import java.util.*;

class GcdAndLcm {
    
    // method to claculate GCD
    static int gcd(int n1, int n2) {
        if (n2 != 0) {
            return gcd(n2, n1%n2);
        } else {
            return n1;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        //read numbers 
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
    }
}
