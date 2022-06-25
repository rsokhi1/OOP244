/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_RECTANGLE_H_
#define SDDS_RECTANGLE_H_
#include "LblShape.h"
namespace sdds{
    class Rectangle: public LblShape{
        unsigned int m_width {0};
        unsigned int m_height {0};
    public:
        Rectangle() {}
        Rectangle(const char *label,int width, int height);
        virtual ~Rectangle() {}
        void getSpecs(std::istream &istr);
        void draw(std::ostream &ostr) const;
    };   
}
#endif // !SDDS_RECTANGLE_H_