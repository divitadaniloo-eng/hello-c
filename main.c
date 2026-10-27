#include <stdio.h>

void greet(const char *name) {
    printf("Hello, %s!\n", name);
}

int main(void) {
    char name[50];

    printf("What is your name? ");
    if (scanf("%49s", name) != 1) {
        printf("No name entered.\n");
        return 1;
    }
    greet(name);
    return 0;
}