#include <stdio.h>
int multi(int n){
    return n*n;
}
int main(){
    int x;
    printf("Enter number: \n");
    scanf("%d",&x);
    int result=multi(x);
    printf("Square is: %d",result);
    return 0;
}
