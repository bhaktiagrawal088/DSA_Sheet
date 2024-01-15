import java.util.*;

public class fino {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print(series(i) + " ");
        }

        s.close();
    }

    static int series(int n) {
        if (n <= 1) {
            return n;
        }
        return series(n - 1) + series(n - 2);
    }

}
