#if !defined TOKENS_H
#define TOKENS_H

#include "Text.h"
<<<<<<< HEAD

//! Class to divide up a String into individual tokens based on a character delimiter.
/*!
 * The Tokens class accepts a String and a character (the delimiter) through the constructor.
 * Several Strings (tokens) are created based on the appearance of the delimiter in the original String.
 * The delimiter itself is not part of the tokens.
 * The resulting tokens can be obtained by index according to their location in the original String.
 * The original String is unaffected.
 * Note that the destructor does <b>not</b> delete the individual tokens.
 */
=======
using CSC2110::String;

namespace CSC2110
{
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517
class Tokens
{
   private:
      String** tokens;
      int max_tokens;
      int sz;

      void addToken(String* str);  //requires a resizing check
      void resize();

   public:
<<<<<<< HEAD
//! The constructor that accepts the String used to generate tokens and the character delimiter to determine the tokens (the passed in String is unaffected).
      Tokens(String* str, char delimiter);
//! The destructor which does not delete the individual tokens.
      ~Tokens();
//! Display all of the tokens generated from the String and character delimiter passed to the constructor.
      void displayTokens();
//! Return a specific token whose index is determined by the token location in the original String (0-based).
      String* getToken(int index);
//! Returns the number of tokens generated given the parameters passed to the constructor (>= 1).
      int getNumTokens();
};
=======
      Tokens(String* str, char delimiter);
      ~Tokens();  //Tokens is not responsible for deleting each token
      void displayTokens();
      String* getToken(int index);  //returns a specifically requested token
      int getNumTokens();
};
}
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

#endif