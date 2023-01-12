// program to print the name of a number
// <date> <name>

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define NAME0 "Zero"
#define NAME1 "One"
#define NAME2 "Two"
#define NAME3 "Three"
#define NAME4 "Four"
#define NAME5 "Five"
#define NAME6 "Six"
#define NAME7 "Seven"
#define NAME8 "Eight"
#define NAME9 "Nine"
#define NAME10 "Ten"
#define NAME11 "Eleven"
#define NAME12 "Twelve"
#define NAME13 "Thirteen"
#define NAME14 "Fourteen"
#define NAME15 "Fifteen"
#define NAME16 "Sixteen"
#define NAME17 "Seventeen"
#define NAME18 "Eighteen"
#define NAME19 "Nineteen"

#define NAME20 "Twenty"
#define NAME30 "Thirty"
#define NAME40 "Forty"
#define NAME50 "Fifty"
#define NAME60 "Sixty"
#define NAME70 "Seventy"
#define NAME80 "Eighty"
#define NAME90 "Ninety"

#define NAME100 "Hundred"

#define ANDJOIN " and "

// int main (int argc, char *argv[]) {
//    // load number from the command line
//    assert (argc > 1);
//    int number = atoi (argv[1]);

//    // note: this function only works for positive numbers less than 1000
//    assert (number >=0);
//    assert (number < 1000);

//    // some useful values you might want to use
//    int unitsDigit     = number % 10;
//    int tensDigit      = (number/10) % 10;
//    int hundredsDigit  = number/100 ;
//    int lastTwoDigits  = number % 100;

//    // display info FYI
//    // comment these lines out once the program is working
//    printf ("\n");
//    printf ("The units digit is %d\n",     unitsDigit);
//    printf ("The tens digit is %d\n",      tensDigit);
//    printf ("The hundreds digit is %d\n",  hundredsDigit);
//    printf ("The last two digits are %d\n",lastTwoDigits);
//    printf ("\n");

//    printf ("The number %d is pronounced as ", number);

//    // edit the code below and insert new code as required to print out the names of
//    // numbers using ifs

//    // don't make it a long sequence of hundreds of if statements!
//    // make your code succint clear and with as little repitition as you can

//    // print hundreds part  (write this last - once you have it working for numbers under 100)

//    // print the last two digits

//    if (unitsDigit == 1) {
//          printf (NAME1);
//       } else if (unitsDigit == 2) {
//          printf (NAME2);
//       } else if (unitsDigit == 3) {
//          printf (NAME3);
//       } else if (unitsDigit == 4) {
//          printf (NAME4);
//       } else if (unitsDigit == 5) {
//          printf (NAME5);
//       } else if (unitsDigit == 6) {
//          printf (NAME6);
//       } else if (unitsDigit == 7) {
//          printf (NAME7);
//       } else if (unitsDigit == 8) {
//          printf (NAME8);
//       } else if (unitsDigit == 9) {
//          printf (NAME9);
//       } else {
//          assert ("logic error");
//       }

//    printf ("\n");
//    printf ("\nDone!\n");

//    return EXIT_SUCCESS;
// }

int main(int argc, char *argv[])
{
   // load number from the command line
   assert(argc > 1);
   int number = atoi(argv[1]);

   // note: this function only works for positive numbers less than 10000
   assert(number >= 0);
   assert(number < 10000);

   // some useful values you might want to use
   int unitsDigit = number % 10;
   int tensDigit = (number / 10) % 10;
   int hundredsDigit = (number / 100) % 10;
   int thousandsDigit = (number / 1000);

   // display info FYI
   // comment these lines out once the program is working
   printf("\n");
   printf("The units digit is %d\n", unitsDigit);
   printf("The tens digit is %d\n", tensDigit);
   printf("The hundreds digit is %d\n", hundredsDigit);
   printf("The thousands digit is %d\n", thousandsDigit);
   printf("\n");

   printf("The number %d is pronounced as ", number);

   if (thousandsDigit > 0)
   {
      if (thousandsDigit == 1)
         printf(NAME1);
      else if (thousandsDigit == 2)
         printf(NAME2);
      else if (thousandsDigit == 3)
         printf(NAME3);
      else if (thousandsDigit == 4)
         printf(NAME4);
      else if (thousandsDigit == 5)
         printf(NAME5);
      else if (thousandsDigit == 6)
         printf(NAME6);
      else if (thousandsDigit == 7)
         printf(NAME7);
      else if (thousandsDigit == 8)
         printf(NAME8);
      else if (thousandsDigit == 9)
         printf(NAME9);
      printf(NAME100 " ");
   }

   if (hundredsDigit > 0)
   {
      if (hundredsDigit == 1) 
         printf(NAME1);
      else if (hundredsDigit == 2) 
         printf(NAME2);
      else if (hundredsDigit == 3)
         printf(NAME3);
      else if (hundredsDigit == 4)
         printf(NAME4);
      else if (hundredsDigit == 5)
         printf(NAME5);
      else if (hundredsDigit == 6)
         printf(NAME6);
      else if (hundredsDigit == 7)
         printf(NAME7);
      else if (hundredsDigit == 8)
         printf(NAME8);
      else if (hundredsDigit == 9)
         printf(NAME9);
      printf(NAME100 " ");
   }

   if (tensDigit > 1)
   {
      if (tensDigit == 2)
         printf(NAME20 " ");
      else if (tensDigit == 3)
         printf(NAME30 " ");
      else if (tensDigit == 4)
         printf(NAME40 " ");
      else if (tensDigit == 5)
         printf(NAME50 " ");
      else if (tensDigit == 6)
         printf(NAME60 " ");
      else if (tensDigit == 7)
         printf(NAME70 " ");
      else if (tensDigit == 8)
         printf(NAME80 " ");
      else if (tensDigit == 9)
         printf(NAME90 " ");
   }

   if (tensDigit == 1)
   {
      if (unitsDigit == 0)
         printf(NAME10);
      else if (unitsDigit == 1)
         printf(NAME11);
      else if (unitsDigit == 2)
         printf(NAME12);
      else if (unitsDigit == 3)
         printf(NAME13);
      else if (unitsDigit == 4)
         printf(NAME14);
      else if (unitsDigit == 5)
         printf(NAME15);
      else if (unitsDigit == 6)
         printf(NAME16);
      else if (unitsDigit == 7)
         printf(NAME17);
      else if (unitsDigit == 8)
         printf(NAME18);
      else if (unitsDigit == 9)
         printf(NAME19);
   }
   else if (tensDigit > 1)
   {
      if (unitsDigit == 0)
         printf("");
      else if (unitsDigit == 1)
         printf(NAME1);
      else if (unitsDigit == 2)
         printf(NAME2);
      else if (unitsDigit == 3)
         printf(NAME3);
      else if (unitsDigit == 4)
         printf(NAME4);
      else if (unitsDigit == 5)
         printf(NAME5);
      else if (unitsDigit == 6)
         printf(NAME6);
      else if (unitsDigit == 7)
         printf(NAME7);
      else if (unitsDigit == 8)
         printf(NAME8);
      else if (unitsDigit == 9)
         printf(NAME9);
   }

   printf("\n");
   printf("\nDone!\n");

   return EXIT_SUCCESS;
}