#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void pronounce_number(int num)
{
    if (num < 0)
    {
        printf("minus ");
        num = -num;
    }
    if (num >= 1000)
    {
        pronounce_number(num / 1000);
        printf("thousand ");
        num %= 1000;
    }
    if (num >= 100)
    {
        pronounce_number(num / 100);
        printf("hundred and ");
        num %= 100;
    }
    if (num >= 20)
    {
        printf("%s ", tens[num / 10]);
        num %= 10;
    }
    if (num > 0)
    {
        printf("%s ", ones[num]);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // note: this function only works for positive numbers less than 1000
    assert(num >= 0);
    assert(num < 1000);

    // some useful values you might want to use

    // not needed anymore as there is no digit printing 
    // int unitsDigit = num % 10;
    // int tensDigit = (num / 10) % 10;
    // int hundredsDigit = num / 100;
    // int lastTwoDigits = num % 100;

    // display info FYI
    // comment these lines out once the program is working
    printf("\n");
    //    printf ("The units digit is %d\n",     unitsDigit);
    //    printf ("The tens digit is %d\n",      tensDigit);
    //    printf ("The hundreds digit is %d\n",  hundredsDigit);
    //    printf ("The last two digits are %d\n",lastTwoDigits);
    printf("\n");
    //

    pronounce_number(num);
    printf("\n");
    return 0;
}
