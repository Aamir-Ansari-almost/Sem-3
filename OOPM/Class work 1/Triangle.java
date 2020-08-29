import java.util.*;

class Triangle {
	public static void main(String args[]) {
		int s1, s2, s3;
		Scanner sc = new Scanner(System.in);
		s1 = sc.nextInt();
		s2 = sc.nextInt();
		s3 = sc.nextInt();
		
		if (s1 == s2 && s2 == s3) {
			System.out.println("The Triangle is EQUILATERAL");
		} else if ((s1==s2) || (s2==s3) || (s3==s1)) {
			System.out.println("The Triangle is ISOSCELES");
		} else {
			System.out.println("The Triangle is SCALENE");
		}
		
	}
}