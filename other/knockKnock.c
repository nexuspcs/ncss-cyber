// Simple program to print a knock knock joke
// 5 jan 2023 james coates
#include <stdlib.h>
#include <stdio.h>

#define WHO "Atch"
#define PUNCH_LINE "Bless you!"

int main (int arc, char** argv) {

   printf("Knock Knock\n");
   printf("> Who's there?\n");
   printf(WHO);
   printf("\n");
   printf("> ");
   printf(WHO);
   printf(" who?\n");
   printf(PUNCH_LINE);
   printf("\n");

   return EXIT_SUCCESS;
}
