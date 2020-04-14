import java.util.Scanner;
import java.util.*;

class ThreeSum {

    // Implement your solution here
    public List<List<Integer>> threeSum(Integer[] nums) {
        List<List<Integer>> result = new ArrayList<>();

        return result;
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Integer n = scanner.nextInt();

        Integer nums[] = new Integer[n];

        for(Integer i = 0 ; i < n ;i++) {
            nums[i] = scanner.nextInt();
        }

        List<List<Integer>> result = new ThreeSum().threeSum(nums);

        for (Integer i = 0; i < result.size(); ++i) {
            System.out.printf("%d %d %d\n", result.get(i).get(0), result.get(i).get(1), result.get(i).get(2));
        }
    }
};
