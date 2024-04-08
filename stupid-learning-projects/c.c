#include <stdbool.h>
#include <stdio.h>

int main() {
  bool cIsFun = true;
  bool jsIsShit = false;

  if (cIsFun) {
    printf("%d is the value true", cIsFun);
  } else if (!jsIsShit) {
    printf("%d is the value for false", jsIsShit);
  }
}
