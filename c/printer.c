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

//
int askForUSRinput (int width, int height, char drawChar);
//



// int main (int argc, char *argv[]) {
//    assert (argc > 2);

//    int width;
//    int height;
//    width = atoi (argv[1]);
//    height = atoi (argv[2]);

//    char grey = '#';
//    askForUSRinput (width, height, grey);
//    printf ("BING!\n");
//    return (EXIT_SUCCESS);
// }




int main (int argc, char** argv) {
   // assert (argc > 2);

   int width;
   int height;
   width = 0;
   height = 0;

   char grey = '#';
   askForUSRinput (width, height, grey);
   printf ("BING!\n");
   return (EXIT_SUCCESS);
}

//
int askForUSRinput (int width, int height, char drawChar) {

   printf ("Enter value 1\n");
   scanf ("%d", &width);
   printf ("Enter value 2\n");
   scanf ("%d", &height);
   system("clear");
   char grey = '#';
   //

   printStripe (width, height, grey);
   printf ("\n\n");
   printf ("Inputted values printed below:\n");
   printf ("value 1 (width):\n%d\n\n", width);
   printf ("value 2 (height):\n%d\n\n", height);
   printf ("Information about memory used printed below:\n");
   printf ("  - Value 1 (width) was using %ld bytes of memory\n", sizeof(width));
   printf ("  - Value 2 (height) was using %ld bytes of memory\n", sizeof(height));
   
   return 0;
}
//


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
   
 
 