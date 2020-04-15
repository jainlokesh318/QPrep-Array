import java.io.*;
import java.util.*;

class ShortestUnsortedContinuousSubarray {
    // complete the below function implementation
    public int findUnsortedSubarrayLength(int[] nums) {

        return 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nums[] = new int[n];
        for(int i = 0 ; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        int result = new ShortestUnsortedContinuousSubarray().findUnsortedSubarrayLength(nums);
        System.out.println(result);
    }
}
