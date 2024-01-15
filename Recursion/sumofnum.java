import java.util.*;

public class sumofnum {
    // ********* using parameters ***************8

    // public static void main(String args[]) {
    // Scanner s = new Scanner(System.in);
    // int n = s.nextInt();
    // printsum(n, 0);
    // s.close();
    // }

    // static void printsum(int i, int sum) {
    // if (i < 1) {
    // System.out.println("The sum is : " + sum);
    // return;
    // }
    // printsum(i - 1, sum + i);
    // }

    // ******* using functional ***********

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.out.println(printsum(n));
        s.close();
    }

    static int printsum(int n) {
        if (n == 0) {
            return 0;
        }
        return n + printsum(n - 1);
    }
}
