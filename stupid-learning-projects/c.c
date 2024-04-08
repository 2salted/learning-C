#include <stdio.h>

int main() {
  int firstPersonAge = 17;
  int secondPersonAge = 24;
  int allowedDrivingAge = 18;
  char name[] = "joe";

  if (secondPersonAge >= allowedDrivingAge) {
    printf("%s is allowed to drive", name);
  } else {
    printf("%s is not allowed to drive", name);
  }
};
