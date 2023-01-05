// Simple program to print a knock knock joke
// 5 jan 2023 james
#include <stdlib.h>
#include <stdio.h>
#include "joke.h" // we are using an external file outside of this file for our definitions


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

