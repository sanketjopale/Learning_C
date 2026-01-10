#include <stdio.h>
int isEven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    int ans=isEven(x);
    printf("1 if input is even otherwise 0: %d",ans);
    return 0;
}
