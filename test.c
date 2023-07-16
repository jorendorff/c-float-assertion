#include <stdio.h>
#include <assert.h>

void trial(long long c, long long layer1_size, float *syn0, float *syn1, float g) {
  float a = syn1[c];
  float x = g * syn0[c];
  printf("%g %g %g\n", a, x, a + x);
  syn1[c] += g * syn0[c];
  assert(syn1[c] == a + x);
}

int main() {
  float target[2] = { 0.0, -4.52271e-06 };
  float src[2] = { -0.000926437, -0.00102722 };

  trial(1, 2, src, target, 0.01235);
  return 0;
}
