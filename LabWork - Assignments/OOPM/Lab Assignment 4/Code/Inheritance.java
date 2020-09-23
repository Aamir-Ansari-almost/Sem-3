import java.util.*;

class Student {
    // instance variable => general information of all students 
    String name;
    int age;
    String programme;

    // constructor
    Student(String name, int age, String programme) {
        this.name = name;
        this.age = age;
        this.programme = programme;
    }

    // method to display
    void display_student_info() {
        System.out.println("Name  of   Student   :  "+name);
        System.out.println("Age   of   Student   :  "+age);
        System.out.println("Programme of Student :  "+programme);
    }
}

class ReasearchStudent extends Student {
    // instance variable => information of Reasearch Student
    String specialization;
    double workingExperience;
    
    // constructor
    ReasearchStudent(String name, int age, String programme, String specialization, double workingExperience) {
        super(name, age, programme);    // calls super constructor
        this.specialization = specialization;
        this.workingExperience = workingExperience;
    }

    // getters and setters of ReasearchStudent
    String getSpecialization() {
        return this.specialization;
    } void setSpecialization(String specialization) {
        this.specialization = specialization;
    }

    double getWorkingExperience() {
        return this.workingExperience;
    } void setWorkingExperience(double workingExperience) {
        this.workingExperience = workingExperience;
    }

    // method to display
    void display_student_info() {
        System.out.println("*   Name  of   Student   :        "+name);
        System.out.println("*   Age   of   Student   :        "+age);
        System.out.println("*   Programme of Student :        "+programme);
        System.out.println("*   specialization  of student :  "+specialization);
        System.out.println("*   Work experience of student :  "+workingExperience);
    }
}

class GradStudent extends Student {
    // instance variable => information of Grad Student
    double percentage;
    String stream;

    // constructor
    GradStudent(String name, int age, String programme, double percentage, String stream) {
        super(name, age, programme);    // calls super constructor
        this.percentage = percentage;
        this.stream = stream;
    }

    // getters and setters of Grad Student
    double getPercentage() {
        return this.percentage;
    } void setPercentage(double percentage) {
        this.percentage = percentage;
    }

    String getStream() {
        return this.stream;
    } void setStream(String stream) {
        this.stream = stream;
    }

    // method to display
    void display_student_info() {
        System.out.println("*   Name  of   Student   :  "+name);
        System.out.println("*   Age   of   Student   :  "+age);
        System.out.println("*   Programme of Student :  "+programme);
        System.out.println("*   Percentage  of student :  "+percentage);
        System.out.println("*   Stream  of  student    :  "+stream);
    }
}

class Inheritance {

    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        int choice;
        
        int age;
        String name, programme, specialization, stream;
        double workingExperience, percentage;

        while (true) {
            System.out.println("*1 Reasearch Student");
            System.out.println("*2 Graduate  Student");
            System.out.println("*3 EXIT");
            System.out.print("Enter the Type of student  :  ");
            choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
                case 1:    // Reasearch Student
                    System.out.print("Enter Name  of   Student   :  ");
                    name = sc.nextLine();

                    System.out.print("Enter Age   of   Student   :  ");
                    age = sc.nextInt();sc.nextLine();

                    System.out.print("Enter Programme of Student :  ");
                    programme = sc.nextLine();

                    System.out.print("Enter specialization  of student :  ");
                    specialization = sc.nextLine();

                    System.out.print("Enter Work experience of student :  ");
                    workingExperience = sc.nextDouble();

                    ReasearchStudent rStudent = new ReasearchStudent(name, age, programme, specialization, workingExperience);
                    System.out.println();
                    System.out.println("***********************************************");
                    rStudent.display_student_info();
                    System.out.println("***********************************************");
                    break;

                case 2:     // Grag Student
                    System.out.print("Enter Name  of   Student    :  ");
                    name = sc.nextLine();

                    System.out.print("Enter Age   of   Student    :  ");
                    age = sc.nextInt();sc.nextLine();

                    System.out.print("Enter Programme of Student  :  ");
                    programme = sc.nextLine();

                    System.out.print("Enter Percentage of student :  ");
                    percentage = sc.nextDouble();sc.nextLine();

                    System.out.print("Enter Stream  of  student   :  ");
                    stream = sc.nextLine();

                    GradStudent gStudent = new GradStudent(name, age, programme, percentage, stream);
                    System.out.println();
                    System.out.println("***********************************************");
                    gStudent.display_student_info();
                    System.out.println("***********************************************");
                    System.out.println();
                    break;

                case 3:
                    System.out.println();
                    System.out.println("*** E X I T I N G ***");
                    System.exit(1);
                
                default:
                    System.out.println("INVALID INPUT");

            }
        }
    }
}
