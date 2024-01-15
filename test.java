import java.util.*;

public class test {

    public static void main(String[] args) {
        // * Basic Approach **

        // ** Using Recursion ***
        // int[] arr = { 1, 2, 3, 4 };
        // int[] reversedArray = printArrayInReverse(0, arr.length - 1, arr);
        // System.out.print("Reverse Array using recursion : ");
        // printArray(reversedArray);

        // }

        // static int[] printArrayInReverse(int start, int end, int arr[]) {
        // if (start <= end) {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // printArrayInReverse(start + 1, end - 1, arr);
        // }
        // return arr;
        // }

        // static void printArray(int[] arr) {
        // for (int i : arr) {
        // System.out.print(i + " ");
        // }
        // System.out.println();
        // }
        int[] arr = { 1, 2, 3, 4, 5 };
        int[] reversearr = printArrayInReverse(0, arr.length - 1, arr);
        System.out.println("Reverse array using recursion : ");
        for (int i : reversearr) {
            System.out.print(i + " ");
        }
    }

    static int[] printArrayInReverse(int start, int end, int arr[]) {
        if (start >= end) {
            return arr;
        } else {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            printArrayInReverse(start + 1, end - 1, arr);
        }
    }
}
