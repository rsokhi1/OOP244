/*Workshop #8 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 22nd July 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include <iostream>
#include <cstring>
#include "Rectangle.h"
using namespace std;
namespace sdds
{
    Rectangle::Rectangle(const char *label,int width, int height) : LblShape(label){
        int width_test = strlen(LblShape::label() + 2);
        if(height > 3 && width > width_test){
            m_width = width;
            m_height = height;
        }
    }
    void Rectangle::getSpecs(std::istream &istr){
        char comma;
        bool flag = false;
        do{
            LblShape::getSpecs(istr);
            istr>>m_width >> comma >> m_height;
            if(!istr){
                istr.clear();
                istr.ignore(20000,'\n');
            }
            else{
                istr.ignore();
                flag = true;
            }

        }while(!flag);
    }
    
    void Rectangle::draw(std::ostream &ostr) const{
        if(m_height > 0 && m_width){
            ostr<<'+';
            ostr.width(m_width - 2);
            ostr.fill('-');
            ostr<<'-'<<'+'<<endl;

            ostr<<'|';
            ostr.width(m_width - 2);
            ostr.fill(' ');
            ostr<<left<< LblShape::label() << '|' <<endl;
        
            for(unsigned int i = 0;i<(m_height - 3);i++){
                ostr<<'|';
                ostr.width(m_width - 2);
                ostr.fill(' ');
                ostr<<' '<<'|'<<endl;
            }

            ostr<<'+';
            ostr.width(m_width - 2);
            ostr.fill('-');
            ostr<<'-'<<'+';
        }

    }
}