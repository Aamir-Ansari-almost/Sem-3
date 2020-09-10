import java.util.*;
import java.lang.*;
import java.io.*;

class Student {

	String name, addr;
	int age=0;
	Student() {
		this.name = "unknown";
		this.age = 0;
		this.addr = "not available";
	}
	void setInfo(String name, int age, String addr) {
		this.name = name;
		this.age = age;
		this.addr = addr;
	}
	void setInfo(String name, int age) {
		this.name = name;
		this.age = age;
	}
	void display() {
		System.out.println("_____________________________________");
		System.out.println("Name: "+this.name);
		System.out.println("Age: "+this.age);
		System.out.println("Address: "+this.addr);
	}
}

class ObjectArray {
	public static void main(String args[]) {
		int choice, age1, age2;
		String name1, name2, address1, address2;
		Scanner sc = new Scanner(System.in);
		//input
		Student obj[] = new Student[10];
		for(int i=0 ; i<10 ; i++) {
			obj[i] = new Student();
			System.out.println("*1* Name Age");
			System.out.println("*2* Name Age Address");
			System.out.print("Enter your choice :  ");
			choice = sc.nextInt();
			sc.nextLine();
			switch(choice) {
				case 1:
					System.out.print("Enter Name of Student :  ");
					name1 = sc.nextLine();
					System.out.print("Enter Age of Student :  ");
					age1 = sc.nextInt();
					//sc.nextLine();
					obj[i].setInfo(name1, age1);
					break;
				case 2:
					System.out.print("Enter Name of Student :  ");
					name2 = sc.nextLine();
					System.out.print("Enter age of Student :  ");
					age2 = sc.nextInt();
					sc.nextLine();
					System.out.print("Enter Address of Student :  ");
					address2 = sc.nextLine();			
					obj[i].setInfo(name2, age2, address2);
					break;
				default :
					System.out.println("Invalid choice");
			}
		}
		//display
		for (int i=0 ; i<10 ; i++) {
			obj[i].display();			
		}
	}
}








