import java.util.*;

class Ramanujan {

    static int sum=0;
    static int seriesSum (int n) {

        if (n != 0) {
            sum += n;
            return seriesSum(n-1);
        }
        return sum;

    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        // input
        System.out.print("Enter value of n in Ramanujan summation series :  ");
        int n = sc.nextInt();

        System.out.println("Sum of "+n+" terms in Ramanujan series is :  "+seriesSum(n));

    }

}
