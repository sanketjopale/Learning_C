#include <stdio.h>
    int main(){
        int n;
        do{
            printf("Enter number: \n");
            scanf("%d",&n);
            printf("you entered %d\n",n);
        }while(n!=0);
        return 0;
    }
