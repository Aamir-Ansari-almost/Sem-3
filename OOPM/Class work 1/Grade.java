import java.util.*;

class Grades {
	public static void main (String args[]) {
		int num;
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		switch(num) {
			case 0:
				System.out.println("GOOD");
				break;
			case 1:
				System.out.println("VIVID");
				break;
			case 2:
				System.out.println("BRIGHT");
				break;
			case 3:
				System.out.println("BRILLIANT");
				break;
			case 4:
				System.out.println("OUTSTANDING");
				break;
			case 5:
				System.out.println("EXCELLENT");
				break;
			default: 
				System.out.println("NOT VALID");		
		}
	}
}