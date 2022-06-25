/*Workshop #3 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 06th June 2021
*/
#include <iostream>
#include "cstring.h"
#include "Item.h"
using namespace std;
namespace sdds {
    void Item::setName(const char* name){
        strnCpy(m_itemName,name,20);
    }

    void Item::setEmpty(){
        m_price = 0.0;
        m_itemName[0] = '\0';
    }

    void Item::set(const char* name, double price, bool taxed){
        if((price <= 0.0) || (name == nullptr)){
            setEmpty();
        }
        else{
            setName(name);
            m_price = price;
            m_taxed = taxed;
        }
    }

    double Item::price()const{
        return m_price;
    }

    double Item::tax()const{
        const double rate = 0.13;
        double tax;
        if(m_taxed == true){
            tax = m_price * rate;
        }
        else{
            tax = 0.0;
        }
        return tax;
    }

    bool Item::isValid()const{
        bool flag;
        if((m_price != 0.0) && (m_itemName != NULL)){
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    void Item::display()const{
        bool flag;
        flag = isValid();
        if(flag == true){
            cout<<"| ";
            cout.setf(ios::left);
            cout.width(20);
            cout.fill('.');
            cout<<m_itemName;
            cout.unsetf(ios::left);
            cout<<" | ";
            cout.setf(ios::fixed);

            cout.precision(2);
            cout.setf(ios::right);
            cout.width(7);
            cout.fill(' ');
            cout<<m_price;
            cout.unsetf(ios::right);
            cout<<" | ";
            if(m_taxed == true){
                cout<<"Yes";
            }
            else{
                cout<<"No ";
            }
            cout<<" |"<<endl;
        }
        else{
            cout<<"| xxxxxxxxxxxxxxxxxxxx | xxxxxxx | xxx |"<<endl;
        }
    }
}