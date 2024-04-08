#include <stdio.h>

int main() {
  int intMain;
  int studentAge = 13;
  float studentLoan = 104.2;
  int studentID = 96;
  char studentGrade = 'B';
  printf("Joe mama is %d and has student loans of %f\nJoe mama has a grade of "
         "%c and a student id: %d\n",
         studentAge, studentLoan, studentGrade, studentID);
  printf("%lu", sizeof(intMain));

  return 0;
}
