#include <stdio.h>
#include <string.h>

int main() {
   char input_string[101]; // Declare a variable named 'input_string' to hold user input.
   printf("Enter the string :- ");  
   scanf("%[^\n]", input_string); // Read a full line of input from stdin and save it to our variable, input_string.
     
   //Your first line of output goes here
     printf("Hello, \n"); 
     printf("\t%s\n",input_string);
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    
    return 0;
}
