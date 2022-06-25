// Workshop 2: 
// Version: 1.0
// Date: 2021/05/28
// Author: Fardad Soleimanloo
// Description:
// This file tests the DIY section of your workshop
// Do not modify your code
/////////////////////////////////////////////
#include "Population.h"
using namespace sdds;
int main() {
   if (load("PCpopulations.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}