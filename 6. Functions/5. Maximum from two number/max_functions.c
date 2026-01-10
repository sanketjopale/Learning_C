#include <stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x,y,maxm;
    printf("Enter first number: \n");
    scanf("%d",&x);
    printf("Enter second number: \n");
    scanf("%d",&y);
    maxm=max(x,y);
    printf("Maxi: %d",maxm);
    return 0;
}
