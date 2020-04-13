import java.io.*;
import java.util.*;
class SearchInRotatedSortedArray {
    // CRIO_MODIFY_MODULE_L2_PROBLEMS
     // TODO: CRIO_TASK_MODULE_L2_PROBLEMS
    // complete the below function implementation
    public int search(int[] nums, int target) {
        // CRIO_SOLUTION_START_MODULE_L2_PROBLEMS  
        int answer = binary_search(nums, 0, nums.length-1, target);
        return answer;
        // CRIO_SOLUTION_END_MODULE_L2_PROBLEMS
        // CRIO_UNCOMMENT_START_MODULE_L2_PROBLEMS
        //return 0;
        // CRIO_UNCOMMENT_END_MODULE_L2_PROBLEMS
    }
     // CRIO_SOLUTION_START_MODULE_L2_PROBLEMS
    public int binary_search(int arr[], int low, int high, int target) { 
        if (low > high) {
            return -1; 
        }
        int mid = (low+high)/2; 
        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[low] <= arr[mid]) { 
            if (target >= arr[low] && target <= arr[mid]) {
               return binary_search(arr, low, mid-1, target); 
            }
            else {
                return binary_search(arr, mid+1, high, target); 
            }
        } 
        if (target >= arr[mid] && target <= arr[high]) {
            return binary_search(arr, mid+1, high, target); 
        }
        else {
            return binary_search(arr, low, mid-1, target); 
        }
    }
    // CRIO_SOLUTION_END_MODULE_L2_PROBLEMS 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nums[] = new int[n];
        for(int i = 0 ; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        int q = scanner.nextInt();
        while(q > 0) {
            int target = scanner.nextInt();
            int result = new SearchInRotatedSortedArray().search(nums , target);
            System.out.println(result);
            q--;
        }
    }
}