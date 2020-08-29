import java.util.*;

class Race {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		float speed[], qualified[];
		speed = new float[10];
		qualified = new float[10];
		float avg=0;
		int k=0;
		//input
		for(int i=0 ; i<5 ; i++) {
			speed[i] = sc.nextFloat();
		}
		//find average;
		for (int i=0 ; i<5 ; i++) {
			avg += speed[i];
		}
		avg = avg/5;
		//check qualified
		for (int i=0 ; i<5 ; i++) {
			if (speed[i] > avg) {
				qualified[k++] = speed[i]; 
			}	
		}
		//printing qulified speed
		System.out.println();
		System.out.println("Qualified bikers with speed are :  ");
		for(int i=0 ; i<qualified.length && qualified[i]!=0 ; i++) {
			System.out.print(" "+qualified[i]+" ");
		} 
	}
}