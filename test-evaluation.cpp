#include <iostream>
#include <iomanip>

#include "EvaluationChoixMultiples.h"

using namespace std; 


int main()
{
   const int NUM_TESTS = 4;

   Evaluation *tests[NUM_TESTS] =
   {
      new Evaluation(88.0),
      new EvaluationChoixMultiples(100, 25, 70.0),
      new Evaluation(67.0),
      new EvaluationChoixMultiples(50, 12, 60.0)
   };

   /* Version equivalente en deux etapes
   Evaluation *tests[NUM_TESTS] ;
   tests[0] = new Evaluation(88.0);
   tests[1] = new EvaluationSommative(100, 25, 70.0);
   tests[2] = new Evaluation(67.0);
   tests[3] = new EvaluationSommative(50, 12, 60.0);
   */

   for (int count = 0; count < NUM_TESTS; count++)
   {
      cout << "Test #" << (count + 1) << ":\n";
      tests[count]->afficher();
      cout << endl;
   }
   return 0;
}


