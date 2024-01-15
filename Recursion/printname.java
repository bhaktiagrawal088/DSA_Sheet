import java.util.*;

public class printname {
    public static void main(String args[]) {
        Scanner sr = new Scanner(System.in);
        int n = sr.nextInt();
        System.out.println(n);
        name(1, n);

        sr.close();
    }

    static void name(int i, int n) {
        if (i > n)
            return;
        System.out.println("Bhakti");
        name(i + 1, n);
    }

}