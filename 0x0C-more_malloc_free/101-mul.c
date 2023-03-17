#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_number(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3 || strcmp(argv[1], "mul") != 0 || !is_number(argv[2]) || !is_number(argv[3])) {
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int result = num1 * num2;

    printf("%d\n", result);
    return 0;
}
