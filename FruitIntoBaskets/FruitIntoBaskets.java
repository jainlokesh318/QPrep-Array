import java.io.*;
import java.util.*;

class FruitIntoBaskets {
    // complete the below function implementation
    public int totalFruit(int[] trees) {

        return 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int trees[] = new int[n];
        for(int i = 0 ; i < n; i++) {
            trees[i] = scanner.nextInt();
        }
        int result = new FruitIntoBaskets().totalFruit(trees);
        System.out.println(result);
	scanner.close();
    }
}
