import java.util.*;

class Reverse {
    
    static int sum=0, rem;
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

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        // input
        System.out.print("Enter a number to Reverse :  ");
        int num = sc.nextInt();

        int reverse = reverse(num);

        System.out.println("Reverse of "+num+" is :  "+reverse);

    }

}
