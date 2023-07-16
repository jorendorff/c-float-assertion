#include <stdio.h>
#include <assert.h>

void trial(long long i, float *src, float *target, float g) {
  float a = target[i];
  float x = g * src[i];
  printf("%g %g %g\n", a, x, a + x);
  target[i] += g * src[i];
  assert(target[i] == a + x);
}

int main() {
  float target[2] = { 0.0, -4.52271e-06 };
  float src[2] = { -0.000926437, -0.00102722 };

  trial(1, src, target, 0.01235);
  return 0;
}
