def search(nums, target):
    # TODO: CRIO_TASK_MODULE_L2_PROBLEMS
    # Your implementation goes here

    return 0

if __name__ == '__main__':
    n = int(input())
    nums = input().split()
    nums = [int(i) for i in nums]

    q = int(input())
    for i in range(q):
        target = int(input())
        result = search(nums, target)
        print(result)
