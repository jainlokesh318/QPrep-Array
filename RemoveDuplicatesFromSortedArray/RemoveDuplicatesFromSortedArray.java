import java.io.*;
import java.util.*;

public class RemoveDuplicatesFromSortedArray {
    // Implement your solution by completing the below function
    public int removeDuplicates(int[] nums) {
        // CRIO_SOLUTION_START_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY
        if (nums.length == 0)
            return 0;

        int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
        // CRIO_SOLUTION_END_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY

        // CRIO_UNCOMMENT_START_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY
        //return -1;
        // CRIO_UNCOMMENT_END_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] numbers = new int[scanner.nextInt()];
        for (int i = 0; i < numbers.length; i++)
            numbers[i] = scanner.nextInt();
        scanner.close();

        int result = new RemoveDuplicatesFromSortedArray().removeDuplicates(numbers);
        System.out.print(Integer.toString(result));
    }
}
