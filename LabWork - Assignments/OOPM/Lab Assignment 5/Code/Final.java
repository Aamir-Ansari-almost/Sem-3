import java.util.*;

class DiplomaStudent {
    // declaration of blank final variable
    final long PRN;

    DiplomaStudent(long val) {
        PRN = val;
    }

    void display(int number) {
        System.out.println("* PRN of Student "+number+" is :  "+PRN+"  *");
    }
}

class Final {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        long studentPRN=0;
        DiplomaStudent students[] = new DiplomaStudent[10];

        // input
        for (int i=0 ; i<10 ; i++) {
            System.out.print("Enter PRN number of Student number "+(i+1)+" :  ");
            studentPRN = sc.nextLong();
            students[i] = new DiplomaStudent(studentPRN);
        }

        // display
        System.out.println();
        System.out.println("***********************************");
        for (int i=0 ; i<10 ; i++) {
            students[i].display(i+1);
        }
        System.out.println("***********************************");
    }
}
