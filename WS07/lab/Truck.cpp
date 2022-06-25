/*Workshop #7 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Truck.h"
using namespace std;
namespace sdds{
    Truck::Truck(const char *license, int year, double capacity,const char *address):MotorVehicle(license,year){
        m_capacity = capacity;
        this->moveTo(address);
    }
    
    bool Truck::addCargo(double cargo){
        bool flag = false;
        if((m_weight != m_capacity) && cargo > 0){
            m_weight += cargo;
            flag = true;
        }
        if(m_weight > m_capacity){
            m_weight = m_capacity;
        }
        return flag;
    }
    
    bool Truck::unloadCargo(){
        bool flag = false;
        if(m_weight > 0){
            m_weight = 0;
            flag = true;
        }
        return flag;
    }
    
    std::ostream& Truck::write(ostream& os) const{
        MotorVehicle::write(os);
        os<<" | "<<m_weight<<"/"<<m_capacity;
        return os;
    }

    std::istream& Truck::read(istream& in){
        MotorVehicle::read(in);
        cout<<"Capacity: ";
        in>>m_capacity;
        cout<<"Cargo: ";
        in>>m_weight;
        return in;
    }

    std::ostream &operator<<(std::ostream &ostr, const Truck &T){
        return T.write(ostr);
    }

    std::istream &operator>>(std::istream &istr, Truck &T){
        return T.read(istr);
    }



}