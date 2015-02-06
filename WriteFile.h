#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"
<<<<<<< HEAD

#include <fstream>
using namespace std;

struct WriteFile
{
   ofstream output_file;
   bool closed;
};

WriteFile* createWriteFile(const char* file_name);
void destroyWriteFile(WriteFile* wf);
void writeLine(WriteFile* wf, String* line);
void close(WriteFile* wf);

=======
using CSC2110::String;

#include <fstream>
using namespace std;
namespace CSC2110
{

class WriteFile
{
   private:
      ofstream* output_file;
      bool closed;

   public:
      WriteFile(const char* file_name);
      ~WriteFile();
      void writeLine(CSC2110::String* line);
      void close();
};
};
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517
#endif
