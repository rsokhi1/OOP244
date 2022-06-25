/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include<iostream>
#include "Shape.h"
namespace sdds{
    std::ostream& operator<<(std::ostream &ostr, const Shape &S) 
    {
        S.draw(ostr);
        return ostr;    
    }
    
    std::istream& operator>>(std::istream &istr, Shape &S) 
    {
        S.getSpecs(istr);
        return istr;
    }
}