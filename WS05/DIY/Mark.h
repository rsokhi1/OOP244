/*Workshop #5 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 27th June 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_MARK_H_
#define SDDS_MARK_H_
#include <iostream>
namespace sdds
{
    class Mark{
        int m_mark;
    public:
        Mark();
        Mark(int mark);
        operator int() const;
        Mark& operator+=(const int mark);
        Mark& operator=(const int mark);
        operator double() const;
        operator char() const;
    };
    int operator+=(int &mark,const Mark &marks_add);

} 


#endif //!SDDS_MARK_H_