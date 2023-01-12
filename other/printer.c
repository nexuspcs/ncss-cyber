// program to print a greyish stripe
// dimensions width x height 
// drawn using ascii characters
// 8 Jan 23 Richard Buckland and Aaron dePlume
 
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
 
// draw a stripe of the given character
void printStripe (int width, int height, char drawCharacter);
// draw a single line of the specified character
void printRow (int length, char drawCharacter);

int main (int argc, char *argv[]) {
   assert (argc >= 3);

   int width;
   int height;
   width          = atoi (argv[2]);
   height         = atoi (argv[3]);

   char grey = '#';

   printStripe (width, height, grey);
   
   printf ("BING!\n");
   return (EXIT_SUCCESS);
}

void printStripe (int width, int height, char drawChar) {
   int row;
   row = 0;
   
   while (row < height) {
      printRow (width, drawChar);
      printf ("\n");
      row++;
   } 
}
   
void printRow (int width, char drawChar) {
   int column;
   column = 0;
  
   while (column < width) {
      printf ("%c", drawChar);
      column++;
   } 
}
   
 
 