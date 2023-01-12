#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j, length;
    if (argc != 2) {
        printf("Usage: %s length\n", argv[0]);
        return 1;
    }
    sscanf(argv[1], "%d", &length);

    for (i = 1; i <= length; i++) {
        for (j = 1; j <= length; j++) {
            if (i == 1) {
                printf("/");
            } else if (i == length) {
                printf("\\");
            } else if(j==1|| j==length) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
