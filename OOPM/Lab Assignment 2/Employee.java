class Employee {
	String empName;
	int empYear;
	String empAddress;
	
	Employee(String name, int year, String address) {
		empName = name;
		empYear = year;
		empAddress = address;
	}
	void display() {
		System.out.println(empName+"         "+empYear+"           "+empAddress);
	}

	public static void main(String args[]) {
		Employee emp1 = new Employee("Bond ", 1994, "64C-WallsStreet, Kalwa");
		Employee emp2 = new Employee("James", 2000, "221B-BakerStreet, Kalyan");
		Employee emp3 = new Employee("Bond ", 1999, "30-WellingtonSquare, Ghatkopar");
		System.out.println("Name    Year of joining     Address");
		System.out.println();
		emp1.display();
		emp2.display();
		emp3.display();
	}
}