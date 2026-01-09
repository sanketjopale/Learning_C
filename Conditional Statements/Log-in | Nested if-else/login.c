#include <stdio.h>
int main() {
    int userID = 123;
    int password = 456;
    if (userID == 123) {
        printf("User ID correct.\n");
        if (password == 456) {
            printf("Access Granted!\n");
        } else {
            printf("Wrong Password. Access Denied.\n");
        }
    } else {
        printf("Invalid User ID.\n");
    }
    return 0;
}
