    #include<stdio.h>
    int main(){
        int n;
        do{
            printf("Enter number: \n");
            scanf("%d",&n);
            printf("You entered %d (even)\n",n);
        }while(n%2==0);
        return 0;
    }
