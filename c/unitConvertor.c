// a unit convertor program 
// 11 jan 2023 james coates ncss

#include <stdlib.h>
#include <stdio.h>

int main(int arc, char** argv) {

int i; 
i = 0;


while (i >= 0) {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF;          // User inputted Fahreinheit;
  int userinputC;          // User inputted Celsius;
  int userinputUSDtoEuro;  // User inputted for USD to EURO;
  int userinputUSDtoJPY;   // User inputted for USD to JPY;
  int userinputUSDtoRMB;   // User inputted for USD to RMB;
  int userinputUSDtoAUD;   // User inputted for USD to AUD;
  int userinputAUDtoUSD;   // User inputted for AUD to USD;
  int userinputOunce;      // User inputted for Ounce;
  int userinputGram;       // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoEURO;         // varaible that stores the converted USD->EURO;
  float USDtoJPY;          // stores the converted USD->JPY;
  float USDtoRMB;          // stores the converted USD->RMB;
  float USDtoAUD;          // stores the converted USD->AUD;
  float AUDtoUSD;          // stores the converted AUD->USD;
  float ounceToPounds;     // stores the converted Ounce->Pounds;
  float gramsToPounds;     // stores the vonerted Grams->Pounds;

  printf("\n\nWelcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c", &category);

  if (category == 'T')
  {
    printf("Welcome to Temperature Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    scanf("%d", &tempChoice);
    if (tempChoice == 1)
    {
      printf("Please enter the Fahrenheit degree: \n");
      scanf("%d", &userinputF);
      fahrenheitToCelcius = ((userinputF - 32) * (5.0 / 9.0));
      printf("Celcius: %d", fahrenheitToCelcius);
    }
    else if (tempChoice == 2)
    {
      printf("Please enter the Celcius degree: \n");
      scanf("%d", &userinputC);
      celciusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
      printf("Fahrenheit: %d", celciusToFahrenheit);
    }
    else
      printf("Please enter the correct choice. \n");
  }

  else if (category == 'C')
  {
    printf("Welcome to Currency Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for USD to Euro. \n");
    printf("Enter 2 for USD to JPY. \n");
    printf("Enter 3 for USD to RMB. \n");
    printf("Enter 4 for USD to AUD. \n");
    printf("Enter 5 for AUD to USD. \n");
    scanf("%d", &currencyChoice);

    if (currencyChoice == 1)
    {
      printf("Please enter the USD amount: \n");
      scanf("%d", &userinputUSDtoEuro);
      USDtoEURO = userinputUSDtoEuro * 0.93;
      printf("Euro: %.2f \n", USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
    }

    else if (currencyChoice == 2)
    {
      printf("Please enter the USD amount: \n");
      scanf("%d", &userinputUSDtoJPY);
      USDtoJPY = userinputUSDtoJPY * 132.32;
      printf("JPY: %.2f \n", USDtoJPY);
    }

    else if (currencyChoice == 3)
    {
      printf("Please enter the USD amount: \n");
      scanf("%d", &userinputUSDtoRMB);
      USDtoRMB = userinputUSDtoRMB * 6.77;
      printf("RMB: %.2f \n", USDtoRMB);
    }

    else if (currencyChoice == 4)
    {
      printf("Please enter the USD amount: \n");
      scanf("%d", &userinputUSDtoAUD);
      USDtoAUD = userinputUSDtoAUD * 1.45;
      printf("USD: %.2f \n", USDtoAUD);
    }

    else if (currencyChoice == 5)
    {
      printf("Please enter the AUD amount: \n");
      scanf("%d", &userinputAUDtoUSD);
      AUDtoUSD = userinputAUDtoUSD * 0.69;
      printf("USD: %.2f \n", AUDtoUSD);
    }

    else
      printf("Please enter correct choice. \n");
  }
  else if (category == 'M')
  {
    printf("Welcome to Mass Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n");
    scanf("%d", &massChoice);
    if (massChoice == 1)
    {
      printf("Please enter the ounce amount: \n");
      scanf("%d", &userinputOunce);
      ounceToPounds = userinputOunce * 0.0625;
      printf("Pounds: %.2f", ounceToPounds);
    }
    else if (massChoice == 2)
    {
      printf("Please enter the gram amount: \n");
      scanf("%d", &userinputGram);
      gramsToPounds = userinputGram * 0.00220462;
      printf("Pounds: %.2f", gramsToPounds);
    }
    else
      printf("Please enter the correct choice. \n");
  }
  
  i++;
}
return EXIT_SUCCESS;
}
