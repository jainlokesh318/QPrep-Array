import java.util.Scanner;


class FindFirstAndLastPositionOfElementInSortedArray {

    // Implement your solution here
    public int[] searchRange(int[] nums, int target) {
        int answer[] = new int[2];

        return answer;
    }

    public static void main(String args[]) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int target = scanner.nextInt();
        int nums[] = new int[n];

        for(int i = 0 ; i < n ; i++) {
            nums[i] = scanner.nextInt();
        }

        int result[] = new int[2];

        result = new FindFirstAndLastPositionOfElementInSortedArray().searchRange(nums , target);

        System.out.printf("%d %d" , result[0], result[1]);
    }
}
