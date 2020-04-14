
# Implement the below functions
def next_greater(num):
    return -1

def next_smaller(num):
    return -1

def main():
    n = int(input())
    greater_number = next_greater(n)
    smaller_number = next_smaller(n)
    print(greater_number)
    if smaller_number == -1:
        print("No Number")
    else:
        print(smaller_number)


if __name__ == "__main__":
    main()
    
