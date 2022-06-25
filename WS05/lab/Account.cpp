/*Workshop #5 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 27th June 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"

using namespace std;
namespace sdds {
   void Account::setEmpty() {
      m_number = -1;
      m_balance = 0.0;
   }
   Account::Account() {  
      m_number = 0;
      m_balance = 0.0;
   }
   Account::Account(int number, double balance ) {
      setEmpty();
      if (number >= 10000 && number <= 99999
         && balance > 0) {
         m_number = number;
         m_balance = balance;
      }
   }
   std::ostream& Account::display() const{
      if (*this) {  
         cout << " ";
         cout << m_number;
         cout << " | ";
         cout.width(12);
         cout.precision(2);
         cout.setf(ios::right);
         cout.setf(ios::fixed);
         cout << m_balance;
         cout.unsetf(ios::right);
         cout << " ";
      }
      else if(~*this) {
         cout << "  NEW  |         0.00 ";
      }
      else {
         cout << "  BAD  |    ACCOUNT   ";
      }
      return cout;
   }
   
   Account::operator bool() const
   {
      bool flag = false;
      if(m_number <=99999 && m_number >=10000 && m_balance >= 0.0){
         flag = true;
      }  
      return flag;
   }
   
   Account::operator int() const
   {
      return m_number;
   }
   
   Account::operator double() const
   {
      return m_balance;
   }
   
   bool Account::operator ~() const
   {
      return m_number == 0;
   }
   
   Account& Account::operator=(const int acc) 
   {
      if(m_number == 0){
         m_number = acc;
      }
      else if (!acc){
         setEmpty();
      }
      return *this;
   }
   
   Account& Account::operator=(Account &acc) 
   {
      if(!this->m_number && acc.m_number > 0){
         this->m_balance = acc.m_balance;
         this->m_number = acc.m_number;
         acc.m_number = 0;
         acc.m_balance = 0;
      }
      return *this;
   }
   
   
   Account& Account::operator+=(const double money) 
   {
      if(money > 0 && this->m_balance > 0 && this->m_number > 0){
         this->m_balance += money;
      }
      return *this;
   }

   Account& Account::operator-=(const double money) 
   {
      if(money > 0 && money < this->m_balance && this->m_balance > 0 && this->m_number > 0){
         this->m_balance -= money;
      }
      return *this;
   }
   
   Account& Account::operator<<(Account &acc) 
   {
      if(this->m_number != acc.m_number){
         this->m_balance += acc.m_balance;
         acc.m_balance = 0;
      }
      return *this;
   }
   
   Account& Account::operator>>(Account &acc) 
   {
      if(this->m_number != acc.m_number){
         acc.m_balance += this->m_balance;
         this->m_balance = 0;
      }
      return *this;
   }
   
   
   double operator+(const Account &left, const Account &right) 
   {
      double sum = 0;
      if(left.m_number > 0 && left.m_balance > 0 && right.m_balance > 0 && right.m_number > 0){
         sum = left.m_balance + right.m_balance;
      } 
      else{
         sum = 0;
      }
      return sum;
   }
   
   double operator+=(double &left,const Account &right) 
   {
      if(right.m_balance > 0){
         left += right.m_balance;
      }
      return left;
   }

   
}