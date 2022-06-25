/*Workshop #3 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 06th June 2021
*/
#include <iostream>
#include "cstring.h"
#include "Bill.h"
using namespace std;
namespace sdds {
    void Bill::setEmpty(){
        m_title[0] = '\0';
        m_items = nullptr;
    }

    bool Bill::isValid()const{
        bool flag;
        int i;
        if((m_title != NULL) && (m_items != nullptr)){
            for(i=0;i<m_noOfItems;i++){
                if(m_items[i].isValid() == false){
                    flag = false;
                }
                else{
                    flag =true;
                }
            }
        }
        else{
            flag = true;
        }
        return flag;
    }

    double Bill::totalTax()const{
        int i;
        double tax = 0.0;
        for(i = 0;i<m_noOfItems;i++){
            tax = tax  + m_items[i].tax();
        }
        return tax;
    }

    double Bill::totalPrice()const{
        int i;
        double price = 0.0;
        for(i = 0;i < m_noOfItems;i++){
            price = price + m_items[i].price();
        }
        return price;
    }
    
    void Bill::Title()const{
        bool flag;
        flag = isValid();
        cout<<"+--------------------------------------+"<<endl;
        if(flag == true){
            cout<<"| ";
            cout.setf(ios::left);
            cout.width(36);
            cout<<m_title;
            cout<<" |"<<endl;
        }
        else{
            cout<<"| Invalid Bill                         |"<<endl;
        }
        cout<<"+----------------------+---------+-----+"<<endl;
        cout<<"| Item Name            | Price   + Tax |"<<endl;
        cout<<"+----------------------+---------+-----+"<<endl;
    }

    void Bill::footer()const{
        bool flag;
        cout<<"+----------------------+---------+-----+"<<endl;
        flag = isValid();
        if(flag == true){
            cout<<"|                Total Tax: ";
            cout.setf(ios::right);
            cout.width(10);
            cout.precision(2);
            cout<<totalTax();
            cout.unsetf(ios::right);
            cout<<" |"<<endl;

            cout<<"|              Total Price: ";
            cout.setf(ios::right);
            cout.width(10);
            cout.precision(2);
            cout<<totalPrice();
            cout.unsetf(ios::right);
            cout<<" |"<<endl;

            cout<<"|          Total After Tax: ";
            cout.setf(ios::right);
            cout.width(10);
            cout.precision(2);
            cout<<totalTax() + totalPrice();
            cout.unsetf(ios::right);
            cout<<" |"<<endl;
        }
        else{
            cout<<"| Invalid Bill                         |"<<endl;
        }
        cout<<"+--------------------------------------+"<<endl;
    }

    void Bill::init(const char* title, int noOfItems){
        if((title == NULL) &&(noOfItems <= 0)){
            setEmpty();
        }
        else{
            int i;
            m_noOfItems = noOfItems;
            m_itemsAdded = 0;
            strCpy(m_title,title);
            m_items = new Item[m_noOfItems];
            for(i = 0; i < noOfItems; i++){
                m_items[i].setEmpty();
            }
        }
    }

    bool Bill::add(const char* item_name, double price, bool taxed){
        bool flag;
        if(m_itemsAdded < m_noOfItems){
            m_items[m_itemsAdded].set(item_name,price,taxed);
            m_itemsAdded = m_itemsAdded+1;
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    void Bill::display()const{
        Title();
        int i;
        for(i=0;i<m_noOfItems;i++){
            m_items[i].display();
        }
        footer();
    }

    void Bill::deallocate(){
        delete [] m_items;
    }
}