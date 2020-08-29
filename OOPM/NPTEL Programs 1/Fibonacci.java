import java.util.*;

class Fibonacci {
	public static void main(String args[]) {
		int a=0, b=1, n=0, c, i, term=0;
		Scanner sc = new Scanner(System.in);	
		System.out.println("Enter the number of terms:");
		n = sc.nextInt();
		for (i=0 ; i < n ; i++) {
			if (i == 0) {
				term = 0;
			} else if (i == 1) {
				term = 1;
			} else {
				c = a + b;
				a = b;
				b = c;
				term = c;
			}
		}
		System.out.println(n+" term of Fibonacci series is => "+term);
	}
}