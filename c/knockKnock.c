// Simple program to print a knock knock joke
// 1 Jan 2023 Richard and Brendan
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
