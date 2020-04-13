
def countConversionBits(a, b):
    xorr = a^b
    result = bin(xorr).count('1')
    return result

def main():
    a, b = map(int, input().split())
    answer = countConversionBits(a, b)
    print(answer)

if __name__ == "__main__":
    main()
    