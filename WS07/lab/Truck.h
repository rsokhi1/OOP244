/*Workshop #7 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef TRUCK_H_
#define TRUCK_H_
#include "MotorVehicle.h"
namespace sdds{
    class Truck:public MotorVehicle{
        double m_capacity{0.0};
        double m_weight{0.0};
    public:
        Truck(const char *license, int year, double capacity,const char *address = nullptr);
        bool addCargo(double cargo);
        bool unloadCargo();
        std::ostream& write(std::ostream& os)const;
        std::istream& read(std::istream& in);
    };
    std::ostream &operator<<(std::ostream &ostr, const Truck &T);
    std::istream &operator>>(std::istream &istr, Truck &T);
}
#endif // !TRUCK_H_