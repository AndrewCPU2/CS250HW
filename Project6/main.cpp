/*
/*    A program to show if a word is a Palindrome or not.
/*    Andrew Riley
/*    Dec 7, 2023
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(string& character, int start, int end)
{
    if (start >= end)
        {
            return true;
        }
    if (character[start] != character[end])
        {
            return false;
        }
    isPalindrome(character, start + 1, end - 1);
}
int main()
{
    try
    {

         string word;
         cout << "Enter a word: ";
         cin >> word;

         char letter = word[0];
         if (!isalpha(letter))
         {
             throw runtime_error ("The fist character is not a letter");
         }
         else
         {
             cout << endl << "The fist character is a letter" << endl;
         }

         transform(word.begin(), word.end(), word.begin(), ::toupper);
         cout << "The word in all capitals: " << word << endl;

         if (isPalindrome(word ,0 , word.length() - 1))
         {
             cout << "This word is a Palindrome." << endl;
         }
         else
         {
             cout << "This word is not a Palindrome." << endl;
         }
    }
    catch (runtime_error& e)
    {
        cout << endl << "Error: " << e.what() << endl;
    }
    return 0;
}
