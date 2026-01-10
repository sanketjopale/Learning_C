#include<stdio.h>
void prtDhanyawad();
void prtDanke();
int main(){
    char n;
    printf("Enter nationality [IN for Indian & DE for german]: \n");
    scanf("%c",&n);
    if(n=='I'){
        prtDhanyawad();
    }
    else if(n=='G'){
        prtDanke();
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}
void prtDhanyawad(){
    printf("Dhanyawad Sanket\n");
}
void prtDanke(){
    printf("Danke Sanket\n");
}
