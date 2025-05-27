// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// iostream is a part of the C++ standard library
// it contains objects and functions to print text to the screen and recieve text from the keyboard
// Pre-processor directives do not end with a semicolon
#include <iostream>

// "main" is the name of the function; it is case sensitive
// "()" represents an empty parameter list; The main function may recieve nothing or a set of strings that come from the command line
int main(){
    // "::" = Scope Resolution Operator
    // "cout" = C Out is short for Character Output; Represents the output window
    // "<<" = Left-Bound Insertion Operator; Enter whatever message you want to send to the object at the left
    // "endl" = Short for End Line; 
    std::cout << "Hi There" << std::endl; 
    
    std::cout << std::endl << std::endl; // Prints out two End Line Characters to seperate my output from the debugger's exit message; Makes it easier to read
    return(0);  // main is a function that returns an integer, so we will return 0 since it is traditionally used to mean that no errors came up in the program
}