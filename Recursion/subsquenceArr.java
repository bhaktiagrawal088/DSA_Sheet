import java.util.ArrayList;
import java.util.List;

public class subsquenceArr {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3 };
        List<List<Integer>> powerSet = printsubsequences(arr);
        System.out.println("Power Set: " + powerSet);
    }
    // Function to print all subsequence of array elements

    static List<List<Integer>> printsubsequences(int arr[]) {
        List<List<Integer>> result = new ArrayList<>();
        subsequence(arr, 0, new ArrayList<>(), result);
        return result;
    }

    static void subsequence(int arr[], int index, List<Integer> currarr, List<List<Integer>> result) {
        result.add(new ArrayList<>(currarr));

        for (int i = index; i < arr.length; i++) {
            currarr.add(arr[i]);
            subsequence(arr, i + 1, currarr, result);
            currarr.remove(currarr.size() - 1);
        }
    }

    // Using recursion
    // public static void main(String[] args) {
    // int arr[] = { 1, 2, 3 };
    // int n = arr.length;
    // ArrayList<Integer> ds = new ArrayList<>();
    // printsubsequences(0, ds, arr, n);
    // }

    // public static void printsubsequences(int i, ArrayList<Integer> ds, int arr[],
    // int n) {
    // if (i == n) {
    // for (int it : ds) {
    // System.out.print(it + " ");
    // }
    // if (n == 0) {
    // System.out.println("{}");
    // }
    // System.out.println();
    // return;
    // }
    // // Adding the element at index i in the current subset
    // ds.add(arr[i]);
    // printsubsequences(i + 1, ds, arr, n);
    // // Removing the added element to go back and try other elements
    // ds.remove(ds.size() - 1);
    // printsubsequences(i + 1, ds, arr, n);
    // }

}
