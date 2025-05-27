// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // We want to get a string from the user, so we need to call this library

int main(){
    std::string str; // str is a string variable we will use to hold the user's input
    std::cout << "Please type out your name. Press the enter key when finished. " << std::flush; // "flush" makes sure that the output is completely sent to the terminal before waiting for the user input
    std::cin >> str; // This line puts the user input in str; cin only works for single words
    std::cout << "Nice to meet you, " << str << "!" << std::endl;  // This line prints str

    std::cout << std::endl << std::endl; // Adds an empty line between my text and the end of message text
    return (0);
}
