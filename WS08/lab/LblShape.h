/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_LBLSHAPE_H_
#define SDDS_LBLSHAPE_H_
#include "Shape.h"
namespace sdds{
    class LblShape : public Shape{
        char *m_label {nullptr};
    protected:
        const char *label() const;
        LblShape() {}
        LblShape(const char *label);
        virtual ~LblShape();
        LblShape(const LblShape &L) = delete;
        LblShape &operator=(const LblShape &L) = delete;

        void getSpecs(std::istream &istr);
    };
}
#endif // !SDDS_LBLSHAPE_H_