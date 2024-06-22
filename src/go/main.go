package main

func collatz(seed uint32) {
  var steps uint16 = 0;
  for seed > 1 {
    for seed % 2 == 0 {
      steps++;
      seed /= 2;
    }
    if seed > 1 {
      steps++;
      seed = seed * 3 + 1;
    }
  }
}

func main() {
  for (unsigned int seed = 1; seed < 1000000000; seed++) {
    collatz(seed);
  }
}

// In new PC timings: 3m31.8, 3m32.1, 3m14.4
