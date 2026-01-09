#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  printf("Enter the value of b: ");
  scanf("%d",&b);
  printf("Enter the value of c: ");
  scanf("%d",&c);
  int all=a+b+c;
  float avg=all/3.0;
  printf("The average of three numbers %d, %d and %d is %f: \n",a,b,c,avg);
return 0;
}
