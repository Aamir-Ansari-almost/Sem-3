import java.util.*;

class Pallindrome {
	public static void main(String args[]) {
		int num, rev=0, temp;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		temp = num;
		while (temp != 0) {
			rev = rev * 10;
			rev += temp % 10;
			temp = temp/10;
		}

		if (rev == num) {
			System.out.println("Entered number is a pallindrome");		
		} else {
			System.out.println("Entered number is not a pallindrome");
		}		
	}
}