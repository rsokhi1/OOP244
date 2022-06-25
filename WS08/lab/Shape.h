/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_SHAPE_H_
#define SDDS_SHAPE_H_
#include <iostream>
namespace sdds{
    class Shape{
    public:
        virtual ~Shape() {}
        virtual void draw(std::ostream &ostr) const = 0;
        virtual void getSpecs(std::istream &istr) = 0;
    };
    std::ostream &operator<<(std::ostream &ostr, const Shape &S);
    std::istream &operator>>(std::istream &istr, Shape &S);
}
#endif // !SDDS_SHAPE_H_