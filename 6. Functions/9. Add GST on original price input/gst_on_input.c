#include<stdio.h>
  void calValue(float a);
  int main(){
      float a;
      printf("Enter the price: \n");
      scanf("%f",&a);
      calValue(a);
      return 0;
  }
  void calValue(float a){
      a=a+(0.18*a);
      printf("Final price after adding GST is: %.2f",a);
  }
