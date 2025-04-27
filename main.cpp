/******************************************************************************
# Author:            Ari P.
# Assignment:        Assignment 4
# Date:              April 24, 2025
# Description:       This program will determine whether one phrase entered by
                     the user contains the other.
# Input:             phrase1 (string), phrase2 (string)
# Output:            phrase1 (string), phrase2 (string), phrase3 (string)
# Sources:           Assignment 4 specifications, cplusplus.com reference, 
                     zyBooks reference
#*****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
   // Declare variables for input and output
   string phrase1 = "";
   string phrase2 = "";
   string phrase3 = "";
   // Declare variables to mark positions within phrases
   int pos1 = 0;
   int pos2 = 0;

   // Print a welcome message
   cout << "Welcome to the Phrases and Subphrases program!" << endl << endl;

   // Prompt user for input
   cout << "Enter Phrase 1: ";
   // Use getline() to allow spaces
   getline(cin, phrase1);
   // Echo input back to the user
   cout << "You entered: " << phrase1 << endl;
   cout << "Enter Phrase 2: ";
   getline(cin, phrase2);
   cout << "You entered: " << phrase2 << endl << endl;

   // Search phrase1 for phrase2 and set pos1 to its location within (if
   // phrase1 doesn't contain phrase2, pos1 will be npos, or -1).
   pos1 = phrase1.find(phrase2);

   // Check if both phrases are the same
   if (phrase1 == phrase2) {
      phrase3 = "Both phrases match";
      // phrase3 will be printed later
   }
   // If phrase1 contains phrase2, then set phrase3 to be phrase1 (starting at
   // pos1) and print the result
   else if (pos1 != string::npos) {
      cout << "Phrase 2 is found within Phrase 1" << endl;
      phrase3 = phrase1.substr(pos1);
   }
   // Since phrase1 doesn't contain phrase2, check for the reverse
   else {
      pos2 = phrase2.find(phrase1);
      if (pos2 != string::npos) {
         cout << "Phrase 1 is found within Phrase 2" << endl;
         phrase3 = phrase2.substr(pos2);
      }
      // Neither string contains the other
      else {
         phrase3 = "No matches";
      }
   }

   // Print the final phrase
   cout << phrase3 << endl << endl;

   // Print a goodbye message
   cout << "Thank you for using the Phrases and Subphrases program!" << endl;

   return 0;
}
