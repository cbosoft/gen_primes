#include <stdlib.h>
#include <stdio.h>

int is_prime(int n)
{
  for (int i = 3; i < n/2; i += 2) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main(int argc, const char **argv)
{
  int target_nprimes = 1000;
  if (argc > 1) {
    target_nprimes = atoi(argv[1]);
  }
  int nprimes = 0, i = 1;
  fprintf(stdout, "2\n");
  while (nprimes < target_nprimes) {
    i += 2;
    if (is_prime(i)) {
      fprintf(stdout, "%d\n", i);
      nprimes ++;
    }
  }
}
