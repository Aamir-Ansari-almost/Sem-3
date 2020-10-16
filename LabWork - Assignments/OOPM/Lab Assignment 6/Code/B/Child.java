import java.util.*;
import java.lang.*;

interface Dad {
    void getXorY();
}

interface Mom {
    void getX();
}

class Child implements Dad, Mom {
    String XorY = "";
    String X = "";
    // overridiing from parent class
    public void getXorY() {
        if (Math.random() < 0.5) {
            this.XorY = "Y";
        } else {
            this.XorY = "X";
        }
    }
    public void getX() {
        this.X = "X";
    }
    
    public void genderReveal() {
        String gender = this.X + this.XorY;
        if (gender.equals("XX")) {
            System.out.println("!!!!!!!!!!!!!!!!!");
            System.out.println("!! It's a GIRL !!");
            System.out.println("!!!!!!!!!!!!!!!!!");
        } else {
            System.out.println("!!!!!!!!!!!!!!!!");
            System.out.println("!! It's a BOY !!");
            System.out.println("!!!!!!!!!!!!!!!!");
        }
    }

    public static void main(String args[]) {
        Child baby = new Child();
        baby.getXorY();
        baby.getX();
        baby.genderReveal();
    }
}



