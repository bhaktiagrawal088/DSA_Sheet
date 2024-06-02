// import java.util.ArrayList;
// import java.util.List;

// public class test {
//     public static void main(String[] args) {
//         int[] nums = { 1, 2, 3 };
//         List<List<Integer>> powerSet = generatePowerSet(nums);

//         System.out.println("Power Set: " + powerSet);
//     }

//     // Function to generate the power set of a given array
//     static List<List<Integer>> generatePowerSet(int[] nums) {
//         List<List<Integer>> result = new ArrayList<>();
//         generatePowerSetHelper(nums, 0, new ArrayList<>(), result);
//         return result;
//     }

//     // Helper function for generating power set using recursion
//     static void generatePowerSetHelper(int[] nums, int index, List<Integer> current, List<List<Integer>> result) {
//         // Add the current subset to the result
//         result.add(new ArrayList<>(current));

//         // Generate subsets by including the current element
//         for (int i = index; i < nums.length; i++) {
//             current.add(nums[i]);
//             generatePowerSetHelper(nums, i + 1, current, result);
//             current.remove(current.size() - 1);
//         }
//     }
// }

import java.util.*;

class test {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the value");
        int n = s.nextInt();
        int total = n * n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = total - ((i * n) + (n - j));
                System.out.print(val + " ");
            }
            System.out.println();
        }

    }
}
