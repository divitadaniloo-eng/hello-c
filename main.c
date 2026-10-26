#include <stdio.h>

int main(void) {
    char name[50];

    printf("What is your surname? ");
    if (scanf("%49s", name) != 1) {
        printf("No name entered.\n");
        return 1;
    }
    printf("Hello, %s!\n", name);
    return 0;
}