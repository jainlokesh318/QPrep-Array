from crio.python.io import PrintMatrix

def searchRange(nums):
    v = [-1, -1]
    # Your implementation goes here

    return v

if __name__ == '__main__':
    row = input().split()
    n = int(row[0])
    target = int(row[1])
    nums = input().split()
    nums = [int(i) for i in nums]
    result = searchRange(nums)
    PrintMatrix.OneDMatrix(result, ' ')

