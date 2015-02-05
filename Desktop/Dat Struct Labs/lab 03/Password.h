#if !defined PASSWORD_H
#define PASSWORD_H
#include "ListArray.h"
#include "Text.h"

using namespace std;
using namespace CSC2110;
class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
	  Password();  //makes the choice for the password
	  ~Password();
	  void addWord(String*word); //adds all the words to a list to let the user know what to select
	  void guess(int try_password, int num_matches) // displays the guess and the number of matching characters of that password
	  int getNumberOfPasswordsLeft(); //updates the list from the passwords that are removed and keeps the others
	  void displayViableWords(); //lists all the words that you can still choose from
	  int bestGuess(); // lets the user input what they believe is their best guess
	  String*getOriginalWord(int index);//shows the original list of words


};

#endif
