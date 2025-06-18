#include "Evaluation.h"
#include <iostream>
#include <iomanip>

char Evaluation::getCote() const
{
   char cote;
   
   if (resultat > 89)
      cote = 'A';
   else if (resultat > 79)
      cote = 'B';
   else if (resultat > 69)
      cote = 'C';
   else if (resultat > 59)
      cote = 'D';
   else
      cote = 'F';
   
   return cote;
}

void Evaluation::afficher() const
{
   std::cout << std::setprecision(1) << std::fixed;
   std::cout << "Le score numerique est " << getResultat() << "." << std::endl;
   std::cout << "La cote est  " << getCote() << "." << std::endl;
}
