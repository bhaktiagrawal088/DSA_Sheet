import java.util.*;

public class print1ton {
    // public static void main(String args[]) {
    // Scanner sc = new Scanner(System.in);
    // int n = sc.nextInt();
    // // System.out.println(n);
    // print(1, n);
    // sc.close();
    // }

    // static void print(int i, int n) {
    // if (i > n) {
    // return;
    // }
    // System.out.println(i);
    // print(i + 1, n);
    // }

    // ********** print 1 to N without using the increment of i ***********
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        print(n, n);

        scan.close();
    }

    static void print(int i, int n) {
        if (i < 1) {
            return;
        }
        print(i - 1, n);
        System.out.println(i);
    }
}
