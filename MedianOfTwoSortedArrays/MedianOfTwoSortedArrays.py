
def find_median(nums1, nums2, m, n):
    if m > n:
        nums1, nums2, m, n = nums2, nums1, n, m
    left_min, right_max, half_len = 0, m, (m + n + 1) // 2
    while left_min <= right_max:
        i = (left_min + right_max) // 2
        j = half_len - i
        if i < m and nums2[j - 1] > nums1[i]:
            left_min = i + 1
        elif i > 0 and nums1[i - 1] > nums2[j]:
            right_max = i - 1
        else:
            if i == 0: 
                max_of_left = nums2[j-1]
            elif j == 0:
                max_of_left = nums1[i-1]
            else: 
                max_of_left = max(nums1[i-1], nums2[j-1])
            if (m + n) % 2 == 1:
                return max_of_left
            if i == m: 
                min_of_right = nums2[j]
            elif j == n: 
                min_of_right = nums1[i]
            else: 
                min_of_right = min(nums1[i], nums2[j])
            return (max_of_left + min_of_right) / 2.0 


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