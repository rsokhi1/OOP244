/*Workshop #10 Part #1
        Name        : Rajbeer Sokhi
        StudentId   : 124969205
        Email       : rsokhi1@myseneca.ca
        Section     : NAA
        Date        : 5th August 2021
*/
#include <iostream>
#include <fstream>
#include <cstring>
#include "Text.h"
using namespace std;
namespace sdds {
   int Text::getFileLength() const {
      int len = 0;
      ifstream fin(m_filename);
      while (fin) {
         fin.get();
         len += !!fin;
      }
      return len;
   }
   
   
   const char& Text::operator[](int index) const{
      int flag;
      if(index >=0 || index < getFileLength()){
         flag = index;
      }
      else{
         flag = getFileLength();
      }
      return m_content[flag];
   }

   Text::Text(const char* filename){
      if(filename){
         m_filename = new char[strlen(filename) + 1];
         strcpy(m_filename,filename);
         read();
      }
   }
   
   Text::Text(const Text &T){
      *this = T;
   }
   
   Text& Text::operator=(const Text &T){
      if(this != &T){
         if(m_filename){
            delete [] m_filename;
         }

         if(T.m_filename){
            m_filename = new char[strlen(T.m_filename) + 1];
            strcpy(m_filename,T.m_filename);
            read();
         }
         else{
            m_filename = nullptr;
            m_content = nullptr;
         }
      }
      return *this;
   }
   
   Text::~Text(){
      delete [] m_filename;
      delete [] m_content;
      m_filename = nullptr;
      m_content = nullptr;
      
   }
   
   void Text::read(){
      char temp;
      int flag = 0;
      ifstream read(m_filename);
      if(m_content){
         delete [] m_content;
      }
      if(read.is_open()){
         m_content = new char[getFileLength() + 1];

         while (read.get(temp))
         {
            m_content[flag] = temp;
            flag++;
         }

         m_content[flag] = '\0';
      }
      else{
         m_content = nullptr;
      }  
   }
   
   void Text::write(std::ostream& os) const{
      if(m_content){
         os<<m_content;
      }
   }
   
   std::ostream& operator<< (std::ostream &os, const Text &src){
      src.write(os);
      return os;
   }
}