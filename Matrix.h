#if !defined MATRIX_H
#define MATRIX_H

<<<<<<< HEAD
//the indices are not 0-based!!
=======
//the indices are 1-based!!
namespace CSC2110
{
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517
class Matrix
{
   private:
      int rows;
      int cols;

      double* mat;

   public:
      Matrix(int rows, int cols);  //constructor
      ~Matrix();                   //destructor
      void displayMatrix();

<<<<<<< HEAD
=======
      int getNumRows();
      int getNumCols();

>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517
      double getElement(int row, int col);
      void setElement(int row, int col, double val);

      Matrix* add(Matrix* other);
      Matrix* multiply(Matrix* other);

      static Matrix* readMatrix(const char* file_name);  //discuss static
      void writeMatrix(const char* file_name);
};
<<<<<<< HEAD
=======
}
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

#endif
