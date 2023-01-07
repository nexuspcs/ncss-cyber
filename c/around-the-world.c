// 6 jan 2023 james coates
#include <stdlib.h>
#include <stdio.h>

#define NUM_VERSES 4
#define LINES_PER_VERSE 15 // this does not make sense, there is a different amount of phrase per verse
#define AROUND "Around the world, around the world"

int main (int arc, char** argv) {

// verse 1
    int verse1 = 0;
    int linesVerse1 = 8;
    while (verse1 < linesVerse1) {
        printf (AROUND);
        printf ("\n"); 
        verse1++;
    }
//
printf ("\n\n");
// verse 2
    int verse2 = 0;
    int linesVerse2 = 16;
    while (verse2 < linesVerse2) {
        printf (AROUND);
        printf ("\n");
        verse2++;
    }
//
printf ("\n\n");
// verse 3
    int verse3 = 0;
    int linesVerse3 = 28;
    while (verse3 < linesVerse3) {
        printf (AROUND);
        printf ("\n"); 
        verse3++;
    }
//
printf ("\n\n");
// verse 4
    int verse4 = 0;
    int linesVerse4 = 18;
    while (verse4 < linesVerse4) {
        printf (AROUND);
        printf ("\n");
        verse4++;
    }
printf ("\n\n");
//

return EXIT_SUCCESS;
}
