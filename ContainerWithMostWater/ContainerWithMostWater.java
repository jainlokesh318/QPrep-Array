import java.io.*;
import java.util.*;

class ContainerWithMostWater {
    // complete the below function implementation
    public int maxArea(int[] height) {
        // CRIO_SOLUTION_START_MODULE_CONTAINER_WITH_MOST_WATER
        int n = height.length;
        int left = 0 , right = n-1;
        int minimum = (height[left] < height[right] ? height[left] : height[right]);
        int answer = minimum*(right-left);
        while(left < right) {
            if(height[left] < height[right]) {
                left++;
                minimum = (height[left] < height[right] ? height[left] : height[right]);
                answer = (answer >  minimum*(right-left) ? answer :  minimum*(right-left)); 
            }
            else {
                right--;
                minimum = (height[left] < height[right] ? height[left] : height[right]);
                answer = (answer >  minimum*(right-left) ? answer :  minimum*(right-left));
            }
        }
        return answer;
        // CRIO_SOLUTION_END_MODULE_CONTAINER_WITH_MOST_WATER
        // CRIO_UNCOMMENT_START_MODULE_CONTAINER_WITH_MOST_WATER
        //return 0;
        // CRIO_UNCOMMENT_END_MODULE_CONTAINER_WITH_MOST_WATER
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int height[] = new int[n];
        for(int i = 0 ; i < n ; i++) {
            height[i] = scanner.nextInt();
        }
        scanner.close();
        int result = new ContainerWithMostWater().maxArea(height);
        System.out.println(result);
    }
}
