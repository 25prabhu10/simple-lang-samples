static void collatz(unsigned int seed) {
  int steps = 0;
  unsigned int n = seed;
  while (n != 1) {
    if (!(n & 1)) {
      n >>= 1;
    } else {
      n = (n * 3) + 1;
    }
    steps++;
  }
}

int main() {
  for (unsigned int seed = 1; seed < 1000000000; seed++) {
    collatz(seed);
  }
  return 0;
}

// Build using
// gcc -o main main.c
// gcc -O2 -o main main.c
// gcc -O3 -o main main.c
// gcc -O3 -march=native -o main main.c
// gcc -O3 -march=native -ffast-math -o main main.c
