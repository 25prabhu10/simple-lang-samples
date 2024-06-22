class Main {
  public static void Collatz(int seed) {
    int steps = 0;
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

  public static void Main(String[] args)
  {
    for (int seed = 1; seed < 1_000_000_000; seed++)
    {
      collatz(seed);
    }
  }
}

// In new PC timings: 2m22, 2m23
