#include <stdio.h>
int summ(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);
    int res=summ(x);
    printf("Sum is: %d",res);
    return 0;
}
