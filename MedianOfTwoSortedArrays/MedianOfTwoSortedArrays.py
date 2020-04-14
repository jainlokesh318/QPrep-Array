# Implement your solution here
def find_median(nums1, nums2, m, n):

    return 0.0

def main():
    n = int(input())
    nums1 = list(map(int, input().split()))
    m = int(input())
    nums2 = list(map(int, input().split()))
    queries = int(input())
    while queries >= 1:
        size1, size2 = map(int, input().split()) 
        answer = find_median(nums1, nums2, size1, size2)
        print(answer*1.0)
        queries -= 1

if __name__ == "__main__":
    main()
