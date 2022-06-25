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
#include <string>
#include "LblShape.h"
using namespace std;

namespace sdds{
    const char *LblShape::label() const{
        return m_label;
    }

    LblShape::LblShape(const char *label){
        if(label[0] != '\0' && label){
            m_label = new char[strlen(label) + 1];
            strcpy(m_label,label);
        }
    }
    

    LblShape::~LblShape(){
        if(m_label){
            delete [] m_label;
            m_label = nullptr;
        }
    }
    
    void LblShape::getSpecs(std::istream &istr){
        string label;
        getline (istr,label,',');

        delete[] m_label;
        m_label = new char[strlen(label.c_str()) + 1];
        strcpy(m_label,label.c_str());
    }

}