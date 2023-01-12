#include <stdlib.h>
#include <stdio.h>
    
void intended_function();
void other_function();
    
/** MAIN **/
int main(int argc, char *argv[]) {
    
    // Welcome the user
    printf("This one is easy!\n");
    printf("Just run the other function!\n");
    printf("It's located at %p, but never called.\n", other_function);
    printf("Surely you can jump there somehow.\n");
    
    // Call the function
    intended_function();
    
    printf("You didn't win :(\n");
    
    return EXIT_SUCCESS; 
}
    
void intended_function() {
    // Declare the variables
    char input_string[16];
    
    // Get some input. I wonder what for?
    printf("Here's your chance for input: \n");
    gets(input_string);
    
    printf("I'll tell you if you win!\n");
}
    
void other_function() {
    printf("YOU WIN!\n");
}