/*Workshop #7 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "MotorVehicle.h"
#include <cstring>
using namespace std;
namespace sdds{
    MotorVehicle::MotorVehicle(const char* license,int year){
        strcpy(m_license,license);
        m_year = year;
        strcpy(m_address,"Factory");
    }
    
    void MotorVehicle::moveTo(const char* address){
        if(strcmp(m_address,address) != 0){
            cout<<"|";
            // cout.setf(ios::right);
            cout.width(8);
            cout<<m_license<<"| |";

            cout.width(20);
            cout<<m_address<<" ---> ";

            cout.width(20);
            // cout.setf(ios::right);
            cout<<left<<address<<"|"<<right<<endl;
            strcpy(m_address,address);
        }
    }
    
    ostream& MotorVehicle::write(ostream& os) const{
        os<<"| ";
        os<<m_year;
        os<<" | ";
        os<<m_license;
        os<<" | ";
        os<<m_address;
        return os;
    }
    
    istream& MotorVehicle::read(std::istream& in){
        cout<<"Built year: ";
        in>>m_year;
        cout<<"License plate: ";
        in>>m_license;
        cout<<"Current location: ";
        in>>m_address;
        return in;
    }
    
    std::ostream& operator<<(std::ostream &ostr, const MotorVehicle& M) 
    {
        return M.write(ostr);   
    }

    std::istream& operator>>(std::istream& istr,MotorVehicle& M){
        return M.read(istr);
    }
}