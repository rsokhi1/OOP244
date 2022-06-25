/*Workshop #7 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef MOTORVEHICLE_H_
#define MOTORVEHICLE_H_
#include <iostream>
namespace sdds{
    class MotorVehicle{
        char m_license[9]{'\0'};
        char m_address[64]{'\0'};
        int m_year{0};
    public:
        MotorVehicle(const char* license,int year);
        void moveTo(const char* address);
        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& in);
    };
    std::ostream& operator<<(std::ostream &ostr, const MotorVehicle& M);
    std::istream& operator>>(std::istream &istr, MotorVehicle& M);
}

#endif // !MOTORVEHICLE_H_