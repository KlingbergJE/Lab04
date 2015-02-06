#if !defined RANDOM_H
#define RANDOM_H

<<<<<<< HEAD
=======
namespace CSC2110
{
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517
class Random
{
   private:
      Random();
<<<<<<< HEAD
      void randomInit();
=======
void randomInit();
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

   public:
      virtual ~Random();
      static Random* getRandom();

<<<<<<< HEAD
      int getRandomInt(int lower, int upper);
      float getRandomFloat(float lower, float upper);
};
=======
int getRandomInt(int lower, int upper);
float getRandomFloat(float lower, float upper);
};
}
>>>>>>> fad140033b448d66e643c5a487ec17bba21bd517

#endif
