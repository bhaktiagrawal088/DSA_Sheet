import java.util.*;

public class stringpalindrome {
    public static void main(String[] args) {
        // String str = "madam";
        // int start = 0;
        // boolean isPalindrome = true;
        // // Check from first character to middle of the word.
        // while (start < ((str.length()) / 2)) {
        // if (str.charAt(start) != str.charAt((str.length() - start - 1))) {
        // isPalindrome = false;
        // break;
        // }
        // start++;
        // }
        // if (isPalindrome == true) {
        // System.out.println("Yes, it is a palindrome");
        // } else {
        // System.out.println("No, it is not a palindrome");
        // }

        // *** using recursion ***
        String name = "madam";
        System.out.println(Pali(0, name));
    }

    static boolean Pali(int i, String name) {
        if (i < name.length() / 2) {
            return true;
        } else if (name[i] != name[name.length() - i - 1]) {
            return false;
        }
        return Pali(i + 1, name);
    }
}
