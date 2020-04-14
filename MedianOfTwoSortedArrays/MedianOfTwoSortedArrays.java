import java.io.*;
import java.util.*;

class MedianOfTwoSortedArrays {
    // complete the below function implementation
     public double findMedianSortedArrays(int[] nums1, int[] nums2 , int m, int n) {

        return 0.0;
    }
    public static void main(String args[]) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int nums1[] = new int[m];
        for(int i = 0 ; i < m ; i++) {
            nums1[i] = scanner.nextInt();
        }
        int n = scanner.nextInt();
        int nums2[] = new int[n];
        for(int i = 0 ; i < n ; i++) {
            nums2[i] = scanner.nextInt();
        }
        int q = scanner.nextInt();
        for(int i = 0 ; i < q ; i++) {
        int size1 = scanner.nextInt();
        int size2 = scanner.nextInt();
        double result = new MedianOfTwoSortedArrays().findMedianSortedArrays(nums1,nums2,size1,size2);
        System.out.println(result);
        }
        scanner.close();
    }
}
