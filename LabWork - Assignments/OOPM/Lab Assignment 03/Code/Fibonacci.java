import java.util.*;

class Fibonacci {

    static int fibo(int n) {

        if (n==0 || n==1) {
            return n;
        } else {
            return (fibo(n-1) + fibo(n-2));
        }

    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        // input
        System.out.print("Enter number of elements required in Fibonacci series :  ");
        int num = sc.nextInt();

        // print series
        for (int n=0 ; n<num ; n++) {
            System.out.print(fibo(n)+"  ");
        }
    }
}
