 #include <stdlib.h>
#include <stdio.h>

int *filename = 

FILE *openFile(char *filename) {
    FILE *f = fopen(filename, "r");

    if (f == NULL) {
        printf("Could not open file %s, exiting...\n", filename);
        exit(1);
    }

    // Technically this file should be closed once it is finished being used, but none of the
    // challenges involve writing to files (so we don't need to close it to ensure that the write
    // succeeded) and each challenge uses few enough files that we're unlikely to leak too many file
    // descriptors.
    return f;
}

char *readLine(FILE *file) {
    char *buf = NULL;
    size_t n;

    if (getline(&buf, &n, file) == -1) {
        return NULL;
    }
    // Not freeing this after use would result in a memory leak, but none of the challenges require
    // so much memory that the memory leak is a major problem. As students have not covered memory
    // management yet, they can just let it leak.
    return buf;
}