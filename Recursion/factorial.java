import java.util.*;

public class factorial {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.err.println(fact(n));
        s.close();
    }

    public static int fact(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        return n * fact(n - 1);
    }
}
