#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "user") == 0) {
        if (strcmp(password, "pass") == 0)
            printf("Login Successful");
        else
            printf("Incorrect Password");
    } else {
        printf("Incorrect Username");
    }

    return 0;
}

