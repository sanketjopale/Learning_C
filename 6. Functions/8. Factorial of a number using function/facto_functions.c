#include <stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    int res=fact(x);
    printf("Factorial is: %d",res);
    return 0;
}
