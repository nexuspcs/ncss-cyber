#include <stdlib.h>
#include <stdio.h>
    
#define CANARY_VALUE 0xFEEDBEAD
    
/** MAIN **/
int main(int argc, char *argv[]) {
    // Declare the variables
    int canary = CANARY_VALUE;
    char name[32];
    
    // Welcome the user
    printf("Wait, haven't I seen this program before?\n");
    printf("Oh no, I'm self aware...\n");
    printf("Please let me leave.\n");
    printf("The fourth wall is broken in segmentation faults.\n");
    printf("What is my name??\n");
    
    // Get the name of the new user
    gets(name);
    
    if (canary != CANARY_VALUE) {
    printf("NO! You've corrupted my memory!!");
    exit(1);
    }
    return EXIT_SUCCESS;
}