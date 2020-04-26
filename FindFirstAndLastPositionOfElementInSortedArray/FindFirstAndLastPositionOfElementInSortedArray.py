from solution import solution

if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().strip().split()))
    q = int(input())
    for _q in range(q):
        target = int(input())
        result = solution().searchRange(nums, target)
        print(*result)
