import java.util.*;
import java.lang.*;

class Numbers {
    synchronized void printNumbers(int n) {
        for (int i=1 ; i<=10 ; i++) {
            System.out.println(n++);
            n++;
            try {
                Thread.sleep(400);
            }
            catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}

class MyThread1 extends Thread {
    Numbers t;
    public MyThread1(Numbers t) {
        this.t = t;
    }
    public void run() {
        t.printNumbers(0);
    }
}

class MyThread2 extends Thread {
    Numbers t;
    public MyThread2(Numbers t) {
        this.t = t;
    }
    public void run() {
        t.printNumbers(1);
    }
}

public class ImplementationOfThreads {
    public static void main(String args[]) {
        Numbers obj = new Numbers();
        MyThread1 t1 = new MyThread1(obj);
        MyThread2 t2 = new MyThread2(obj);
        t1.start();
        t2.start();
    }
}
