#include <stdio.h>
#include <string.h>

void init(){
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

char flag[100] = "NT{**flag**}";

void vulnerable() {
    char input[200];
    printf("input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    printf(input);
    printf("\n");
}

int main() {
    init();
    setbuf(stdout, NULL);
    puts("Welcome to Format String Lab!");
    vulnerable();
    return 0;
}

