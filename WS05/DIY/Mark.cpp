/*Workshop #5 DIY
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 27th June 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include <iostream>
#include "Mark.h"

namespace sdds{
    Mark::Mark() 
    {
        m_mark = 0;
    }
    Mark::Mark(int mark){
        if(mark >= 0 && mark <= 100 ){
            m_mark = mark;
        }
        else{
            m_mark = -1;
        }
    }
    
    Mark::operator int() const{
        int result = 0;
        if(m_mark >= 0 && m_mark <= 100){
            result = m_mark;
        }
        return result;
    }
    
    Mark& Mark::operator+=(const int mark){
        if( m_mark >= 0 && m_mark <=100){
            m_mark += mark;
        }
        return *this;
    }

    Mark& Mark::operator=(const int mark){
        m_mark = mark;
        return *this;
    }

    Mark::operator double()const{
        double result = 0.0;
        if(m_mark >= 0 && m_mark <= 100){
            if(m_mark >= 0 && m_mark < 50) result = 0.0;
            else if(m_mark >= 50 && m_mark < 60) result = 1.0;
            else if(m_mark >= 60 && m_mark < 70) result = 2.0;
            else if(m_mark >= 70 && m_mark < 80) result = 3.0;
            else if(m_mark >= 80 && m_mark <= 100) result = 4.0;
        }
        else{
            result = 0.0;
        }
        return result;
    }
    Mark::operator char()const{
        char result = 'X';
        if(m_mark >= 0 && m_mark <= 100){
            if(m_mark >= 0 && m_mark < 50) result = 'F';
            else if(m_mark >= 50 && m_mark < 60) result = 'D';
            else if(m_mark >= 60 && m_mark < 70) result = 'C';
            else if(m_mark >= 70 && m_mark < 80) result = 'B';
            else if(m_mark >= 80 && m_mark <= 100) result = 'A';
        }
        else{
            result = 'X';
        }
        return result;
    }
    
    int operator+=(int &mark,const Mark &marks_add){
        int temp = int(marks_add);
        // if(mark >= 0 && mark <=100 && temp >= 0 && temp <= 100)
        if (temp >= 0 && temp <= 100)
        {
            mark = mark + temp;
        }
        return mark;
    }
}