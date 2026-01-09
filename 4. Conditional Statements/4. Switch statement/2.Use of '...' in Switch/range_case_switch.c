#include <stdio.h>
int main() {
  // here i have used ' ... ' for range, it is used in switch instead of e.g. <=,>= etc.
  int marks;
  printf("Enter marks: ");
  scanf("%d", &marks);
  switch (marks) {
      case 90 ... 100:
          printf("Grade: A+ \n");
          break;
      case 70 ... 89:
          printf("Grade: A \n");
          break;
      case 30 ... 69:
          printf("Grade: B \n");
          break;
      case 0 ... 29:
          printf("Grade: C \n");
          break;
      default:
          printf("Invalid marks! \n");
          break;
  }
  return 0;
}
