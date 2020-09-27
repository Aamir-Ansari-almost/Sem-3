import java.util.*;
import java.io.*;

class Array_List {

    static ArrayList<Integer> reverseList(ArrayList<Integer> list) {
        ArrayList<Integer> revList = new ArrayList<Integer>();

        for (int i=(list.size()-1) ; i>=0 ; i--) {
            revList.add(list.get(i));
        }

        return revList;
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        ArrayList<Integer> list = new ArrayList<Integer>();
        int choice;

        while (true) {
            System.out.println("* 1.  ADD");
            System.out.println("* 2.  DISPLAY");
            System.out.println("* 3.  DISPLAY REVERSE");
            System.out.println("* 4.  EXIT!");
            System.out.print("Enter your choice :  ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter element to add :  ");
                    list.add(sc.nextInt());
                    break;
                
                case 2:
                    System.out.print("Elements in the list are :  ");
                    System.out.print(list);
                    System.out.println();
                    break;

                case 3:
                    System.out.print("Reverse of list is :  ");
                    ArrayList<Integer> revList = new ArrayList<Integer>();
                    revList = reverseList(list);
                    System.out.print(revList);
                    System.out.println();
                    break;
                
                case 4:
                    System.out.println("*** E X I T I N G ***");
                    System.exit(1);
                    break;

                default:
                    System.out.println("Invalid Input");
                    break;
            }
        }
    }
}
