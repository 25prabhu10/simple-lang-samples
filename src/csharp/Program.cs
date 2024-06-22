static void Collatz(int seed)
{
  int steps = 0;
  while (seed > 1)
  {
    while (seed % 2 == 0)
    {
      steps++;
      seed /= 2;
    }
    if (seed > 1) {
      steps++;
      seed = seed * 3 + 1;
    }
  }
}

static void Program()
{
  for (int seed = 1; seed < 1_000_000_000; seed++)
  {
    collatz(seed);
  }
}

Program();

// In new PC timtings: 2m13.5
