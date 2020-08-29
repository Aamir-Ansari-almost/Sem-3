import java.util.*;

class Armstrong {
	public static void main(String args[]) {
		int num, sum=0, temp, rem;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		temp = num;
		while (temp !=0) {
			sum += ((temp%10) * (temp%10) * (temp%10));
			temp = temp / 10;
		}
		System.out.println((sum == num) ? ("Entered number is an Armstrong number") : ("Entered number is NOT an Armstrong number"));
	}
}