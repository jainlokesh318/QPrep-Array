def removeDuplicates(nums):
    # Your implementation goes here
    # CRIO_SOLUTION_START_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY

    # CRIO_SOLUTION_END_MODULE_REMOVE_DUPLICATES_FROM_SORTED_ARRAY

    return 0

if __name__ == '__main__':
    n = int(input())
    nums = []
    if n > 0:
        nums = input().split()
    nums = [int(i) for i in nums]
    result = removeDuplicates(nums)
    print(result)
