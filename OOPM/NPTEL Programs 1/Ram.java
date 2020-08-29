import java.util.*;

class Ram {
	public static void main(String args[]) {
		int s, i;
		float marks[];
		marks = new float[20];
		float avg=0, max	;
		Scanner sc = new Scanner(System.in);
 		System.out.println("Enter number of subjects :  ");
		s = sc.nextInt();
		System.out.println("Enter marks :  ");
		for (i=0 ; i<s ; i++) {
			marks[i] = sc.nextFloat();
		}
		max = marks[0];
		for (i=0 ; i<s ; i++) {
			if (max <= marks[i]) {
				max = marks[i];
			} 
			avg += marks[i];
		}
		avg = avg/s;
		System.out.println("MAX = " + max + "   AVG = " + avg);
	}
}