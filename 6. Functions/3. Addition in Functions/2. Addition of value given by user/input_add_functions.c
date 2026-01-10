#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int x;
    int y;
    int result;
    printf("Enter first number: \n");
    scanf("%d",&x);
    printf("Enter second number: \n");
    scanf("%d",&y);
    result=add(x,y);
    printf("Sum is: %d",result);
    return 0;
}
