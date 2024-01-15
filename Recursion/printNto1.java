import java.util.*;

public class printNto1 {
    // public static void main(String args[]) {
    // Scanner s = new Scanner(System.in);
    // System.out.println("Enter a value of n");
    // int n = s.nextInt();
    // print(n);
    // s.close();
    // }

    // static void print(int n) {
    // if (n < 1) {
    // return;
    // }
    // System.out.println(n);
    // print(n - 1);
    // }

    // ************** print N to 1 (Back Tracking) *************

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        print(1, n);
        s.close();
    }

    static void print(int i, int n) {
        if (i > n) {
            return;
        }
        print(i + 1, n);
        System.out.println(i);
    }
}
