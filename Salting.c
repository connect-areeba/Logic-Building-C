// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main() {
    
    char password[100];
    printf("Enter password: ");
    scanf("%s", &password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newpass[300];
    
    strcpy(newpass, password);
    strcat(newpass, salt);
    printf("Salted password: %s", newpass);
    
}