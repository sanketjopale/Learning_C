#include <stdio.h>
int main(){
    for(int i=1;i<=5;++i){
        printf("%d\n",i);
    }
    printf("----\n");
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
    }
    printf("----\n");
    for(int i=1;i>=-5;--i){
        printf("%d\n",i);
    }
    printf("----\n");
    for(int i=1;i>=-5;i--){
        printf("%d\n",i);
    }
    printf("----\n");
    for(int i = 0; i <= 5; i += 2) {
        printf("%d\n", i);
    }
    printf("----\n");
    for(int i = 0; i >= -6; i -= 2) {
        printf("%d\n", i);
    }
    printf("----\n");
    return 0;
}
