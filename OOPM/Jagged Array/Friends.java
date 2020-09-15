import java.util.*;

class Friends {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        String hobbies[][] = new String[10][];

        // reading
        for (int i=0 ; i<10 ; i++) {

            System.out.print("Enter number of hobbies of Friend "+(i+1)+" :  ");
            int numHobbies = sc.nextInt();
            sc.nextLine();
            hobbies[i] = new String[numHobbies];

            for (int j=0 ; j<numHobbies ; j++) {

                System.out.print("Enter hobby number "+(j+1)+" :  ");
                hobbies[i][j] = sc.nextLine();
                //sc.nextLine();

            }

        }

        // displaying
        for (int i=0 ; i<10 ; i++) {
            
            System.out.println();
            System.out.print("Hobbies of Friend "+(i+1)+" :  ");

            for (int j=0 ; j<hobbies[i].length ; j++) {

                System.out.print(hobbies[i][j] + ",  ");

            }

            System.out.println();
            System.out.println("********************************************");

        }

    }

}
