def is_happy(num):
    seen = set()
    while num != 1 and num not in seen:
        seen.add(num)
        num = sum(int(digit) ** 2 for digit in str(num))
    return num == 1

def find_happy_numbers(limit):
    print(f"Happy numbers up to {limit} are:")
    for num in range(1, limit + 1):
        if is_happy(num):
            print(num, end=" ")
    print()

if __name__ == "__main__":
    limit = int(input("Enter the limit: "))
    find_happy_numbers(limit)