def maxArea(height):
    answer = 0
    # CRIO_SOLUTION_START_MODULE_CONTAINER_WITH_MOST_WATER

    # CRIO_SOLUTION_END_MODULE_CONTAINER_WITH_MOST_WATER
    return answer

if __name__ == '__main__':
    n = int(input())
    height = input().split()
    height = [int(i) for i in height]
    result = maxArea(height)
    print(result)
    
