
# Implement your solution here
def three_sums(nums, n):
    ans = list()

    return ans

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result = three_sums(nums, n)
    for answer in result:
        print(' '.join([str(i) for i in answer]))

if __name__ == "__main__":
    main()
