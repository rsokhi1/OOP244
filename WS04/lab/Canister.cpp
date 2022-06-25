/*Workshop #4 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 15th June 2021
*/
#define _CRT_SECURE_NO_WARNINGS
#include <istream>
#include <iomanip>
#include "cstring.h"  // using strLen, strCpy and strCmp 
#include "Canister.h"
#define PI 3.14159265
using namespace std;
namespace sdds {
    void Canister::setToDefault(){
        m_contentName = nullptr;
        m_height = 13.0;
        m_diameter = 10.0;
        m_contentVolume = 0.0;
        m_usable = true;
    }

    void Canister::setName(const char* Cstr){
        if(Cstr != NULL && m_usable == true){
            delete [] m_contentName;
            m_contentName = new char[strLen(Cstr) + 1];
            strCpy(m_contentName,Cstr);
        }
    }
   
    bool Canister::isEmpty()const{
        bool flag = false;
        if(m_contentVolume < 0.00001){
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    bool Canister::hasSameContent(const Canister& C)const{
        bool flag;
        if( strCmp(m_contentName,C.m_contentName) == 0 && m_contentName != nullptr && C.m_contentName != nullptr){
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }

    Canister::Canister(){
        setToDefault();
    }

    Canister::Canister(const char* contentName){
        setToDefault();
        setName(contentName);
    }

    Canister::Canister(double height, double diameter,const char* contentName){
		setToDefault();
		if (height <= 40.0 && height >= 10.0 && diameter <= 30.0 && diameter >=10)
		{
			m_contentVolume = 0.0;
			m_height = height;
			m_diameter = diameter;
			setName(contentName);
		}
		else
		{
			m_usable = false;
		}
    }

    Canister::~Canister(){
        delete [] m_contentName;
    }

    void Canister::clear(){
        if(m_usable == false){
            delete [] m_contentName;
            m_contentName = nullptr;
            m_contentVolume = 0.0;
            m_usable = true;
        }
    }

    double Canister::capacity()const{
        return PI * (m_height - 0.267) * (m_diameter/2) * (m_diameter/2);
    } 

    double Canister::volume()const{
        return m_contentVolume;
    }

    Canister& Canister::setContent(const char* contentName){
        if(contentName == nullptr){
            m_usable = false;
        }
        else if(isEmpty()){
            setName(contentName);
        }
        else if(strCmp(m_contentName,contentName) != 0){
            m_usable = false;
        }
        return *this;
    }

    Canister& Canister::pour(double quantity){
        if(m_usable == true && quantity > 0 &&  capacity() >= (quantity + volume())){
            m_contentVolume += quantity;
        }
        else{
            m_usable = false;
        }
        return *this;
    }

    Canister& Canister::pour(Canister& C){
        setContent(C.m_contentName);
        if(C.volume() > (capacity() - volume())){
            C.m_contentVolume -=(capacity() - volume());
            m_contentVolume = capacity();
        }
        else{
            pour(C.m_contentVolume);
            C.m_contentVolume = 0.0;
        }
        return *this;
    }

    std::ostream& Canister::display()const{
        cout.setf(ios::fixed);
        cout.width(7);
        cout.precision(1);
        cout<<capacity();
        cout<<"cc (";
        cout<<m_height;
        cout<<"x";
        cout<<m_diameter;
        cout<<") Canister";

        if(m_usable == false){
            cout<<" of Unusable content, discard!";
        }
        else if(m_contentName != nullptr){
            cout.setf(ios::fixed);
            cout<<" of ";
            cout.width(7);
            cout<<volume();
            cout<<"cc   ";
            cout<<m_contentName;
        }
        return cout;
    }

}
