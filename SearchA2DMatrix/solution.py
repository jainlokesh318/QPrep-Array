
def solve(matrix,target):
    res=True
    # CRIO_SOLUTION_START_MODULE_L1_PROBLEMS
    if len(matrix) == 0:
        return False
    i=0
    j=len(matrix[0]) - 1
    while i< len(matrix) and j >= 0:
        if matrix[i][j] > target:
            j-=1
        elif matrix[i][j] < target:
            i+=1
        else:
            return True

    return False
    # CRIO_SOLUTION_END_MODULE_L1_PROBLEMS
    return res