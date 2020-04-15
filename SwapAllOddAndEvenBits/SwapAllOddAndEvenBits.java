import java.io.*;
import java.util.*;

class SwapAllOddAndEvenBits {
    // Complete the below function
    public int swapBits(int n) {

	return n;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();
        int result = new SwapAllOddAndEvenBits().swapBits(n);
        System.out.println(result);
    }
}
