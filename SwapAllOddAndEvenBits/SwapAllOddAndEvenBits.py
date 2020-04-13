
def swap_all_odd_and_even_bits(n):
    for i in range(0, 32, 2):
        if((((n >> i) &1) ^ (n >> (i + 1)) & 1) == 1): 
            n ^= (1 << i)
            n ^= (1 << (i + 1))
    return n

def main():
    n = int(input())
    answer = swap_all_odd_and_even_bits(n)
    print(answer)

if __name__ == "__main__":
    main()