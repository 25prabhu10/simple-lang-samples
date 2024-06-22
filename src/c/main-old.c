void collatz(unsigned int seed) {
  unsigned int steps = 0;
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

int main() {
  for (unsigned int seed = 1; seed < 1000000000; seed++) {
    collatz(seed);
  }
  return 0;
}

// Timings: 5m1s
// Build using
// gcc -o main main.c
// gcc -O2 -o main main.c
// gcc -O3 -o main main.c
// gcc -O3 -march=native -o main main.c
// gcc -O3 -march=native -ffast-math -o main main.c
