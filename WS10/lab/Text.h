/*Workshop #10 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 5th August 2021
*/
#ifndef SDDS_TEXT_H__
#define SDDS_TEXT_H__
#include<iostream>
namespace sdds {
   class Text {
       char* m_filename{nullptr};
       char* m_content{nullptr};
      int getFileLength()const;
   protected:
      const char& operator[](int index)const;
   public:
      Text(const char* filename=nullptr);
      Text(const Text &T);
      Text &operator=(const Text &T);
      virtual ~Text();
      void read();
      virtual void write(std::ostream& os)const;
   };
   std::ostream &operator<< (std::ostream &os, const Text &src);
}
#endif // !SDDS_PERSON_H__

