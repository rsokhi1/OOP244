/*Workshop #5 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 27th June 2021
   I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
#include <iostream>

namespace sdds {
   class Account {
      int m_number;
      double m_balance; 
      void setEmpty();
   public:
      Account();
      Account(int number, double balance);
      std::ostream& display()const;
      operator bool() const;
      operator int() const;
      operator double() const;
      bool operator ~() const;
      Account &operator=(const int acc);
      Account &operator=(Account &acc);
      Account &operator+=(const double money);
      Account &operator-=(const double money);
      Account &operator<<(Account &acc);
      Account &operator>>(Account &acc);
      friend double operator+(const Account &left, const Account &right);
      friend double operator+=(double &left,const Account &right);
   };
   
   
}
#endif // SDDS_ACCOUNT_H_