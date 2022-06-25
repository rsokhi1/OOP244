/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_LINE_H_
#define SDDS_LINE_H_
#include "LblShape.h"
namespace sdds{
    class Line: public LblShape{
        unsigned int m_length {0};

    public:
        Line() {}
        Line(const char *label,int length);
        virtual ~Line() {}

        void getSpecs(std::istream &istr);
        void draw(std::ostream &ostr) const;
    };
}
#endif // !SDDS_LINE_H_