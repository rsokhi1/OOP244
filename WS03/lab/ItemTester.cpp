/*Workshop #3 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 06th June 2021
*/
#include "Item.h"
using namespace sdds;
int main() {
   Item A;
   A.setEmpty();
   A.display();
   A.set("Hot dog buns", 4.99, false);
   A.display();
   return 0;
}


/*
Output:
| xxxxxxxxxxxxxxxxxxxx | xxxxxxx | xxx |
| Hot dog buns........ |    4.99 | No  |

*/