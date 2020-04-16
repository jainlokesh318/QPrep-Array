import java.util.*;

// Implement your solution here
class LongestSubstringWithAtMostKDistinctCharacter {
    public int lengthOfLongestSubstringKDistinct(String s, int k) {
        System.out.println(s);

        return 0;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
	scanner.nextLine();
        String s = scanner.nextLine();
        scanner.close();

        int result = new LongestSubstringWithAtMostKDistinctCharacter().lengthOfLongestSubstringKDistinct(s,k);
        System.out.println(result);
    }
}
