import java.util.*;
import java.lang.*;
class Salary {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		float basic, da, hra, gross, cca=240, pf, pt=100, deduction, net;
		System.out.println("Enter employee number :  ");
		int empno = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter employee name :  ");
		String empname = sc.nextLine();
		System.out.println("Enter employee's basic income :  ");
		basic = sc.nextFloat();
		da = 70*basic/100;
		hra = 30*basic/100;
		pf = 10*basic/100;
		gross = basic+da+hra+cca;
		deduction = pf+pt;
		net = gross - deduction;
		System.out.println("Employee with  Employee number: "+empno+"** Name: "+empname+" ** With basic salary of "+basic+" has");
		System.out.println("Gross Salary  :  "+gross);
		System.out.println("Net Salary  :  "+net);
	}
}