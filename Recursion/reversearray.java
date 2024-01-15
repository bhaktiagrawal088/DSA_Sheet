import java.util.*;

public class reversearray {

    public static void main(String[] args) {
        // ******** Basic Approach ***********
        // int[] arr = { 2, 3, 4, 6, 7 };
        // System.out.println("Original array is: ");
        // for (int i = 0; i < arr.length; i++)
        // System.out.print(arr[i] + " ");
        // System.out.println("\nReversed array is:");
        // int start = 0;
        // int end = arr.length - 1;
        // while (start < end) {
        // // swap elements
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;
        // }
        // for (int i = 0; i < arr.length; i++)
        // System.out.print(arr[i] + " ");

        // ************ Using Recursion ***********
        // int[] arr = { 1, 2, 3, 4 };
        // System.out.print("Reverse Array using recursion : ");
        // printArrayInReverse(0, arr.length - 1, arr);

        // }

        // static void printArrayInReverse(int start, int end, int arr[]) {
        // if (start > end) {
        // return;
        // }
        // System.out.print(arr[end] + " ");
        // printArrayInReverse(start, end - 1, arr);
        // }

        // ******** More Approach ********

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
        }
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        printArrayInReverse(start + 1, end - 1, arr);
    }
}

// ******** using single variable *******
// int[] arr = { 1, 2, 3, 4, 5 };
// int n = 5;
// printArrayInReverse(0, arr, n);
// for (int i = 0; i < arr.length; i++) {
// System.out.print(arr[i] + "");
// }
// }

// static void printArrayInReverse(int i, int arr[], int n) {
// if (i >= arr.length / 2) {
// return;
// }
// swap(arr[i], arr[n - i - 1]);
// printArrayInReverse(i + 1, arr, arr.length);
// }

// static void swap(int a, int b[]) {
// int temp = b[0];
// b[0] = b[a];
// b[a] = temp;
// }
// }
