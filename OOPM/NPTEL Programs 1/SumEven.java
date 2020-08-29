import java.util.*;

class SumEven {
	public static void main(String args[]) {
		int n, sum=0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for (int i=0 ; i<=n*2 ; i=i+2) {
			if(i%3 == 0) {
				sum += i;
			}
		}
		System.out.println("SUM  :  "+sum);
	}
}