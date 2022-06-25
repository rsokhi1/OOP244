/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include <iostream>
#include "Line.h"
using namespace std;

namespace sdds{
    Line::Line(const char *label,int length): LblShape(label){
        if(length > 0){
            m_length = length;
        }
    }
    
    void Line::getSpecs(std::istream &istr) 
    {
        bool flag = false;
        do{
            LblShape::getSpecs(istr);
            istr >> m_length;
            if(!istr){
                istr.clear();
                istr.ignore(20000,'\n');
            }
            else{
                istr.ignore();
                flag = true;
            }
        } while(!flag);
    }

    void Line::draw(std::ostream &ostr) const{
        if(m_length > 0 && LblShape::label()){
            ostr << LblShape::label() <<endl;
            ostr.width(m_length);
            ostr.fill('=');
            ostr<<'=';
        }
    }    
}