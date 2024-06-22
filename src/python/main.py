def collatz(seed):
    steps = 0
    while seed > 1:
        while seed % 2 == 0:
            steps += 1
            seed /= 2
        if seed > 1:
            steps += 1
            seed = seed * 3 + 1

def main():
    for seed in range(1, 1000000000):
        collatz(seed)

if __name__ == "__main__":
    main()
