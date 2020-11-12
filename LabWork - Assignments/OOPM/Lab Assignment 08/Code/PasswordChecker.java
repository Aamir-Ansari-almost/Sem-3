import java.util.*;
import java.lang.*;

class InvalidPasswordException extends Exception {
    // data member
    int conditionViolated = 0;
    // constructor
    public InvalidPasswordException(int condition) {
        super("Invalic Password: ");
        conditionViolated = condition;
    }

    public String printMessage() {
        switch (conditionViolated) {
            // length
            case 1:
                return ("Password length should be between 8 to 15 characters");
            // spaces
            case 2:
                return ("Password should not contain SPACES");
            // digit
            case 3:
                return ("Password should contain at least one DIGIT");
            // special characters
            case 4:
                return ("Password should contain at least one SPECIAL CHARACTER");
            // capital alphabet
            case 5:
                return ("Password must contain at least one CAPTIAL alphabet");
            // small alphabet
            case 6:
                return ("Password must contain at least one SMALL alphabet");
        }
        return("");
    }
}

public class PasswordChecker {
    public static void isValid(String password) throws InvalidPasswordException  {
        // password length between 8-15
        if (!(password.length()>=8 && password.length()<=15)) {
            throw new InvalidPasswordException(1);
        }

        // check for presence of spaces 
        if (password.contains(" ")) {
            throw new InvalidPasswordException(2);
        }

        // check for presence of digit
        if (true) {
            boolean flag = false;
            for (int i=0 ; i<=10 ; i++) {
                String number = Integer.toString(i);
                if (password.contains(number)) {
                    flag = true;
                }
            }
            if (flag == false) {
                throw new InvalidPasswordException(3);
            }
        }

        // checks for special characters
        if (!(password.contains("@") || password.contains("#") 
            || password.contains("!") || password.contains("~") 
            || password.contains("$") || password.contains("%") 
            || password.contains("^") || password.contains("&") 
            || password.contains("*") || password.contains("(") 
            || password.contains(")") || password.contains("-") 
            || password.contains("+") || password.contains("/") 
            || password.contains(":") || password.contains(".") 
            || password.contains(",") || password.contains("<") 
            || password.contains(">") || password.contains("?") 
            || password.contains("|"))) { 
            throw new InvalidPasswordException(4); 
        }

        // check for capital letters
        if (true) {
            boolean flag = false;
            for (int i=65 ; i<=90 ; i++) {
                char alphabet = (char)i;
                String str = Character.toString(alphabet);
                if (password.contains(str)) {
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                throw new InvalidPasswordException(5);
            }
        }
        
        // check for small letter
        if (true) {
            boolean flag = false;
            for (int i=97 ; i<=122 ; i++) {
                char alphabet = (char)i;
                String str = Character.toString(alphabet);
                if (password.contains(str)) {
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                throw new InvalidPasswordException(6);
            }
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Password :  ");
        String password = sc.nextLine();
        try {
            System.out.println("Is password "+password+" valid?");
            isValid(password);
            System.out.println("Password is Valid!!");
        }
        catch (InvalidPasswordException e) {
            System.out.println(e.getMessage());
            System.out.println(e.printMessage());
        }
    }
}
