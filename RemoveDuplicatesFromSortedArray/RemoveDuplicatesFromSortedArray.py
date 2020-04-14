def removeDuplicates(nums):
    # Your implementation goes here

    return 0

if __name__ == '__main__':
    n = int(input())
    nums = []
    if n > 0:
        nums = input().split()
    nums = [int(i) for i in nums]
    result = removeDuplicates(nums)
    print(result)
