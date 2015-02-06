#include "ReadFile.h"
#include <iostream>
#include <string>

<<<<<<< HEAD
ReadFile* createReadFile(const char* file_name)
{
   ReadFile* rf = new ReadFile;

   rf->input_file.open(file_name);
   rf->closed = false;
   rf->_eof = false;

   return rf;
}

void destroyReadFile(ReadFile* rf)
{
   close(rf);
   delete rf;
}

bool eof(ReadFile* rf)
{
   return rf->_eof;
}

void close(ReadFile* rf)
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));
=======
ReadFile::ReadFile(const char* file_name)
{
   input_file = new std::ifstream();
   input_file->open(file_name);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()
{
   close();
   delete input_file;
}

bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close()
{
   if (!closed)
   {
      input_file->close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   std::string text;
   _eof = !(getline(*input_file, text));
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

   String* str = new String((const char*) text.c_str());
   return str;
}
