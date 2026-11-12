#include <iostream>
#include <string>
#include <cctype> 

using namespace std;


bool isPalindrome(string text) {
    int length = text.length();

    
    for (int i = 0; i < length / 2; i++) {
        
        char frontChar = tolower(text[i]);
       
        char backChar = tolower(text[length - 1 - i]);

        if (frontChar != backChar) {
        
            return false;
       
        }
    
    }

   
    return true;
}

int main() {
    
    string userInput;

    cout << "Enter a word or phrase to check if it is a palindrome." << endl;
    
    cout << "Type 'q' to forget life and accept darkness." << endl;

   
    getline(cin, userInput);

    
    while (userInput != "q") {
        
        if (isPalindrome(userInput) == true) {
    
            cout << "\"" << userInput << "\" is a palindrome!" << endl;
        }

        else
        {
        
            cout << "\"" << userInput << "\" is NOT a palindrome." << endl;
        }

        cout << "\n Enter another this or that (or 'q' to sleeze out): ";
        
        getline(cin, userInput);
    }

    cout << "Program ended. Goodbye!" << endl;

    return 0;
}