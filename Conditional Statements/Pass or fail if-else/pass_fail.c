#include<stdio.h>
int main(){
    int score;
    printf("Enter score: \n");
    scanf("%d",&score);
    if(score>=90){
        printf("Good score \n");
    }
    else if(score>=50 && score<90){
        printf("Average score \n");
    }
    else if(score>=31 && score<50){
        printf("Poor score \n");
    }
    else{
        printf("Fail \n");
    }
    return 0;
}
