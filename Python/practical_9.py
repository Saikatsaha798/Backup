def climb(x, y):
    ans = x//y
    ans += x-ans*y
    return ans

if __name__ == "__main__":
    x, y = map(int, input("Enter the Input : ").split())
    print(f"Output = {climb(x, y)}")