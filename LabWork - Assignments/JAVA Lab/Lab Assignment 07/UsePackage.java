import java.util.*;
import credit.*;

class UsePackage {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        AmountInWords obj = new AmountInWords();
        System.out.print("Enter the amount :  ");
        int amount = sc.nextInt();

        obj.getAmount(amount);
        System.out.print("Amount in word :  ");
        obj.displayAmount();
    }
}
