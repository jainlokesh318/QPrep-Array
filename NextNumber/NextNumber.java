import java.io.*;
import java.util.*;

class NextNumber {
    // Complete the below functions
    public long nextGreater(long n) {

        return 0;
    }

    public long nextSmaller(long n) {

        return 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        scanner.close();
        long greater = new NextNumber().nextGreater(n);
        long smaller = new NextNumber().nextSmaller(n);
        System.out.println(greater);
	if (smaller == -1) {
            System.out.println("No Number");
	}
        System.out.println(smaller);

    }
}
