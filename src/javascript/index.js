function collatz(seed) {
    let steps = 0;
    while (seed > 1) {
        while (seed % 2 == 0) {
            steps++;
            seed /= 2;
        }
        if (seed > 1) {
            steps++;
            seed = seed * 3 + 1;
        }
    }
}

function main() {
    for (let seed = 1; seed < 1000000000; seed++) {
        collatz(seed);
    }
}

main();
