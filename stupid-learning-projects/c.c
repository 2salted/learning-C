#include <stdio.h>

int main() {
  int numberTable = 4;
  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", numberTable, i, numberTable * i);
  }
}
