#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

//removes punctions in string and returns a string w/o
string remove_punct(string str);

//coverts characters to lowercase and returns a string with only lower case
string convert_lower(string str);

//swaps the position of two characters returns null
void swap(char& c1, char& c2);

//returns a string that is the reverse of input string
string reverse(string str);

//prints out a vector of strings
void display(vector<string> vstrings);

//returns true or false, whether a string is a palindrome
bool is_palindrome(string str);


int main() {

 // ToDo: Declare two vectors of strings to save the input strings: palindromes,
 // not_palindromes.
 vector<string> palindromes;
 vector<string> not_palindromes;

 // ToDo: Implement a loop to read in the palindrome strings using getline until
 // the user quits.
 string input;
 do
 {
     cout << "Enter your palindrome or type quit: " << endl;
     getline(cin, input);
     if(input != "quit")
     {
         if(is_palindrome(input))
         {
             palindromes.push_back(input);
         }
            else
            {
                not_palindromes.push_back(input);
            }
     }

 }while(input!="quit");


 // ToDo: After exiting the loop, print the list of palindromes under a Palindrome
 // heading and the list that are not palindromes under a Not Palindrome heading.

 cout << "Palindromes:" << endl;
 display(palindromes);
 cout << "NOT Palindromes:" << endl;
 display(not_palindromes);


  return 0;
}


// Function: remove_punct
// Precondition: a string that may or may not have punctuation.
// Postcondition: returns a (possibly shorter) string with punctuaton
// removed.
string remove_punct(string str)
{
  string temp;
  for(int i=0; i<str.length(); i++)
  {
      if(isalpha(str[i]))
      {
          temp+=str[i];
      }
  }
  return temp;
}


// Precondition: a string that may have mixed case in it.
// Postcondition: returns a lowercase string
string convert_lower(string str)
{
  string temp;
  for(int i=0; i<str.length(); i++)
  {
      temp+=tolower(str[i]);
  }
  return temp;
}


// Precondition: two characters that have to swapped.
// Postcondition: c1 is in c2 and c2 is in c1 when swapped.
void swap(char& c1, char& c2)
{
  char temp = c1;
  c1 = c2;
  c2 = temp;
}


// Precondition: a string to be reversed
// Postcondition: returns a string that is the
// reverse of the input string.
string reverse(string str)
{
  string reverse;
  for(int i = str.length()-1; i>=0; i--)
  {
      reverse+=str[i];
  }
  return reverse;
}


// Precondition: a vector of strings to print
// Postcondition: strings are printed one per line.
void display(vector<string> vstrings)
{
  for(int i=0; i<vstrings.size(); i++)
  {
      cout << "\t" << vstrings[i] << endl;
  }
}


// Precondition: a string to be tested
// Postcondition: returns a bool that is true if the input is a palindrome
// returns false otherwise.
bool is_palindrome(string str)
{
  string new_string;
  new_string=remove_punct(str);
  new_string=convert_lower(new_string);
  string reverse_string=reverse(new_string);

  if(reverse_string==new_string)
      return true;
  else
      return false;
}