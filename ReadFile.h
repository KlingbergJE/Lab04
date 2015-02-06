<<<<<<< HEAD
#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

struct ReadFile
{
   ifstream input_file;
   bool _eof;
   bool closed;
};

ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf);
=======
#if !defined READ_FILE_H
#define READ_FILE_H

#include "Text.h"
using CSC2110::String;

#include <fstream>
namespace CSC2110
{

class ReadFile
{
   private:
      std::ifstream* input_file;
      bool _eof;
      bool closed;

   public:
      ReadFile(const char* file_name);
      ~ReadFile();
      String* readLine();
      bool eof();
      void close();
};
};
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

#endif
