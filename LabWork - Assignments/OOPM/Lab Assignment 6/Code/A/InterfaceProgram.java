import java.util.*;

interface Vehicle {
    void setDescriptions();
    void displayDescription();
}

class Bicycle implements Vehicle {
    String companyName = "";
    String color = "";
    int registrationNumber = 0;
    int numberOfWheels = 0;

    // gets and sets information of Bicycle
    public void setDescriptions() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name of the company :  ");
        this.companyName = sc.nextLine();

        System.out.print("Enter colour of the Bicycle :  ");
        this.color = sc.nextLine();

        System.out.print("Enter registration number of the Bicycle :  ");
        this.registrationNumber = sc.nextInt();

        System.out.print("Enter number of wheels of the Bicycle :  ");
        this.numberOfWheels = sc.nextInt();
    }
    // display information of Bicycle
    public void displayDescription() {
        System.out.println();
        System.out.println("*** Description of BICYCLE ***");
        System.out.println("COMPANY      :  " + this.companyName);
        System.out.println("COLOUR       :  " + this.color);
        System.out.println("Reg Number   :  " + this.registrationNumber);
        System.out.println("No of Wheels :  " + this.numberOfWheels);
        System.out.println("******************************");
        System.out.println();
    }
}

class Bike implements Vehicle {
    String companyName = "";
    String color = "";
    int registrationNumber = 0;
    String namePlate = "";
    int numberOfWheels = 0;

    // gets and sets information of Bike
    public void setDescriptions() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name of the company :  ");
        this.companyName = sc.nextLine();

        System.out.print("Enter colour of the Bike :  ");
        this.color = sc.nextLine();

        System.out.print("Enter registration number of the Bike :  ");
        this.registrationNumber = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter name plate of the Bike :  ");
        this.namePlate = sc.nextLine();

        System.out.print("Enter number of wheels of the Bike :  ");
        this.numberOfWheels = sc.nextInt();
    }
    // display information of Bike
    public void displayDescription() {
        System.out.println();
        System.out.println("*** Description of Bike ***");
        System.out.println("Company      :  " + this.companyName);
        System.out.println("Colour       :  " + this.color);
        System.out.println("Reg Number   :  " + this.registrationNumber);
        System.out.println("Name plate   :  " + this.namePlate);
        System.out.println("No of Wheels :  " + this.numberOfWheels);
        System.out.println("***************************");
        System.out.println();
    }
}

class Car implements Vehicle {
    String companyName = "";
    String color = "";
    int registrationNumber = 0;
    String namePlate = "";
    int numberOfWheels = 0;

    // gets and sets information of Car
    public void setDescriptions() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name of the company :  ");
        this.companyName = sc.nextLine();

        System.out.print("Enter colour of the Car :  ");
        this.color = sc.nextLine();

        System.out.print("Enter registration number of the Car :  ");
        this.registrationNumber = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter name plate of the Car :  ");
        this.namePlate = sc.nextLine();

        System.out.print("Enter number of wheels of the Car :  ");
        this.numberOfWheels = sc.nextInt();
    }
    // display information of Car
    public void displayDescription() {
        System.out.println();
        System.out.println("*** Description of CAR ***");
        System.out.println("Company      :  " + this.companyName);
        System.out.println("Colour       :  " + this.color);
        System.out.println("Reg Number   :  " + this.registrationNumber);
        System.out.println("Name plate   :  " + this.namePlate);
        System.out.println("No of Wheels :  " + this.numberOfWheels);
        System.out.println("**************************");
        System.out.println();
    }
}

class  InterfaceProgram {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int choice;
        while (true) {
            System.out.println("(1) Bicycle ");
            System.out.println("(2) BIKE");
            System.out.println("(3) CAR");
            System.out.println("(4) EXIT");
            System.out.print("Enter your choice :  ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    Bicycle objOfBicycle = new Bicycle();
                    objOfBicycle.setDescriptions();
                    objOfBicycle.displayDescription();
                    break;

                case 2:
                    Bike objOfBike = new Bike();
                    objOfBike.setDescriptions();
                    objOfBike.displayDescription();
                    break;

                case 3:
                    Car objOfCar = new Car();
                    objOfCar.setDescriptions();
                    objOfCar.displayDescription();
                    break;

                case 4:
                    System.out.println("*** E X I T I N G ***");
                    System.exit(0);
                
                default:
                    System.out.println("*** INVALID INPUT ***");
            }
        }
    }
}
